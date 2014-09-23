// Win32Project1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
struct FEDMESSAGE
{
	unsigned short cbmsg;
	unsigned short fmid;
};

const unsigned short FM_LS_LOBBYMISSIONINFO = 301; 
struct FMD_LS_LOBBYMISSIONINFO : public FEDMESSAGE {
	unsigned short ibszGameName; unsigned short cbszGameName;
	unsigned short ibrgSquadIDs; unsigned short cbrgSquadIDs;
	unsigned short ibszGameDetailsFiles; unsigned short cbszGameDetailsFiles;
	unsigned short ibszIGCStaticFile; unsigned short cbszIGCStaticFile;
	unsigned short ibszServerName; unsigned short cbszServerName;
	unsigned short ibszServerAddr; unsigned short cbszServerAddr;
	unsigned short ibszPrivilegedUsers; unsigned short cbszPrivilegedUsers;
	unsigned short ibszServerVersion; unsigned short cbszServerVersion;
	DWORD			dwPort;
	DWORD         dwCookie;
	unsigned      dwStartTime;
	short         nMinRank;
	short         nMaxRank;
	unsigned      nNumPlayers : 11;
	unsigned      nNumNoatPlayers : 11;
	unsigned      nMaxPlayersPerGame : 11;
	unsigned      nMinPlayersPerTeam : 8;
	unsigned      nMaxPlayersPerTeam : 8;
	unsigned      nTeams : 3;
	bool          fCountdownStarted : 1;
	bool          fInProgress : 1;
	bool          fMSArena : 1;
	bool          fScoresCount : 1;
	bool          fInvulnerableStations : 1;
	bool          fAllowDevelopments : 1;
	bool          fLimitedLives : 1;
	bool          fConquest : 1;
	bool          fDeathMatch : 1;
	bool          fCountdown : 1;
	bool          fProsperity : 1;
	bool          fArtifacts : 1;
	bool          fFlags : 1;
	bool          fTerritorial : 1;
	bool          fGuaranteedSlotsAvailable : 1;
	bool          fAnySlotsAvailable : 1;
	bool          fSquadGame : 1;
	bool          fEjectPods : 1;
};
#define FM_VAR_REF(PFM, NAME) ((PFM)->cb##NAME ? (char*)(PFM) + (PFM)->ib##NAME : NULL)
#pragma once

#using <AllegNetLib.dll>
using namespace System;
using namespace AllegNetLib;

namespace AzUnpack{
	public value class FromLobbyInfo{
	public:
		static FMD_LS_LobbyMissionInfo^ Convert(array<Byte>^ bytes){
			pin_ptr<Byte> nativePtr = &bytes[0];
			FMD_LS_LOBBYMISSIONINFO* lm = (FMD_LS_LOBBYMISSIONINFO*)nativePtr;

			FMD_LS_LobbyMissionInfo^ n = gcnew FMD_LS_LobbyMissionInfo();
			n->cbmsg = lm->cbmsg;
			n->fmid = lm->fmid;
			
			n->GameName				= gcnew String(FM_VAR_REF(lm, szGameName));
			n->SquadIDs				= gcnew String(FM_VAR_REF(lm, rgSquadIDs));
			n->GameDetailsFiles		= gcnew String(FM_VAR_REF(lm, szGameDetailsFiles));
			n->IGCStaticFile = gcnew String(FM_VAR_REF(lm, szIGCStaticFile));
			n->ServerName = gcnew String(FM_VAR_REF(lm, szServerName));
			n->ServerAddr = gcnew String(FM_VAR_REF(lm, szServerAddr));
			n->PrivilegedUsers = gcnew String(FM_VAR_REF(lm, szPrivilegedUsers));
			n->ServerVersion = gcnew String(FM_VAR_REF(lm, szServerVersion));
			n->dwPort = lm->dwPort;
			n->dwCookie = lm->dwCookie;
			n->dwStartTime = lm->dwStartTime;
			n->nMinRank = lm->nMinRank;
			n->nMaxRank = lm->nMaxRank;
			n->nNumPlayers = lm->nNumPlayers;
			n->nNumNoatPlayers = lm->nNumNoatPlayers;
			n->nMaxPlayersPerGame = lm->nMaxPlayersPerGame;
			n->nMinPlayersPerTeam = lm->nMinPlayersPerTeam;
			n->nMaxPlayersPerTeam = lm->nMaxPlayersPerTeam;
			n->nTeams = lm->nTeams;
			n->fCountDownStarted = lm->fCountdownStarted;
			n->fInProgress = lm->fInProgress;
			n->fMSArena = lm->fMSArena;
			n->fScoresCount = lm->fScoresCount;
			n->fInvulnerableStations = lm->fInvulnerableStations;
			n->fAllowDevelopments = lm->fAllowDevelopments;
			n->fLimitedLives = lm->fLimitedLives;
			n->fConquest = lm->fConquest;
			n->fDeathMatch = lm->fDeathMatch;
			n->fCountdown = lm->fCountdown;
			n->fProsperity = lm->fProsperity;
			n->fArtifacts = lm->fArtifacts;
			n->fFlags = lm->fFlags;
			n->fTerritorial = lm->fTerritorial;
			n->fGuaranteedSlotsAvailable = lm->fGuaranteedSlotsAvailable;
			n->fAnySlotsAvailable = lm->fAnySlotsAvailable;
			n->fSquadGame = lm->fSquadGame;
			n->fEjectPods = lm->fEjectPods;

			return n;
		}
	};
}