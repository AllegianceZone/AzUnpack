using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AllegNetLib
{
    public class FMD_LS_LobbyMissionInfo
    {    
        public FMD_LS_LobbyMissionInfo ()
	    {

	    }
        public UInt16 cbmsg { get; set; }
        public UInt16 fmid { get; set; }
        public string GameName { get; set; }
        public string SquadIDs {get; set; }
        public string GameDetailsFiles { get; set; }
        public string IGCStaticFile { get; set;}
        public string ServerName {get; set; }
        public string ServerAddr { get; set; }
        public string PrivilegedUsers { get; set; } 
        public string ServerVersion { get; set; }
        public UInt32 dwPort { get; set; }
        public UInt32 dwCookie { get; set; }
        public UInt32 dwStartTime { get; set; }
        public Int16 nMinRank { get; set; }
        public Int16 nMaxRank { get; set; }
        public int nNumPlayers { get; set; } // uint nNumPlayers        : 11;
        public int nNumNoatPlayers { get; set; }// uint nNumNoatPlayers    : 11; 
        public int nMaxPlayersPerGame { get; set; }// uint nMaxPlayersPerGame : 11;
        public int nMinPlayersPerTeam { get; set; }// uint nMinPlayersPerTeam : 8;
        public int nMaxPlayersPerTeam { get; set; }// uint nMaxPlayersPerTeam : 8;
        public int nTeams { get; set; }// uint nTeams             : 3
        public bool fCountDownStarted { get; set; } // bool fCountdownStarted: 1;
        public bool fInProgress { get; set; } // bool fInProgress: 1;
        public bool fMSArena { get; set; } // bool fMSArena: 1;
        public bool fScoresCount { get; set; } // bool fScoresCount: 1;
        public bool fInvulnerableStations { get; set; } // bool fInvulnerableStations: 1;
        public bool fAllowDevelopments { get; set; } // bool fAllowDevelopments: 1;
        public bool fLimitedLives { get; set; } // bool fLimitedLives: 1;
        public bool fConquest { get; set; } // bool fConquest: 1;
        public bool fDeathMatch { get; set; } // bool fDeathMatch: 1;
        public bool fCountdown { get; set; } // bool fCountdown: 1;
        public bool fProsperity { get; set; }// bool fProsperity: 1;
        public bool fArtifacts { get; set; }// bool fArtifacts: 1;
        public bool fFlags { get; set; }// bool fFlags: 1;
        public bool fTerritorial { get; set; }// bool fTerritorial: 1;
        public bool fGuaranteedSlotsAvailable { get; set; }// bool fGuaranteedSlotsAvailable: 1;
        public bool fAnySlotsAvailable { get; set; }// bool fAnySlotsAvailable: 1;
        public bool fSquadGame { get; set; }// bool fSquadGame: 1;   
        public bool fEjectPods { get; set; }// bool fEjectPods: 1;
    }
}
