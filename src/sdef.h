#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <cstdint>
#include "hash.h"
#include "thirdparty/json/json.hpp"

class sdef {
public:
    sdef();

    sdef(uint64_t rpkgs_index, uint64_t hash_index);

    sdef(std::string json_path, uint64_t hash_value, std::string output_path, bool output_path_is_file);

    sdef(std::string sdef_path, std::string sdef_meta_path, uint64_t hash_value, std::string output_path,
         bool output_path_is_file);

    void generate_json(std::string output_path);

    std::string sdef_file_name = "";
    uint32_t sdef_rpkg_index = 0;
    uint32_t sdef_hash_index = 0;
    std::vector<char> sdef_input_data;
    std::vector<char> sdef_output_data;
    std::vector<char> sdef_data;
    uint32_t sdef_entry_count = 0;
    hash meta_data;
    nlohmann::ordered_json json;
    std::string json_error = "";
    std::vector<std::string> slots = {"_NoSound",
                                   "Dth_BrkNck",
                                   "Dth_Fll",
                                   "Dth_GnSht",
                                   "Dth_HdSht",
                                   "Dth_Mpct",
                                   "Dth_SltThrt",
                                   "Dth_Strngl",
                                   "Dth_Xplo",
                                   "Dth_PrpF",
                                   "Dth_Electro",
                                   "Dth_Burn",
                                   "Dth_Crush",
                                   "Dth_Scrm",
                                   "Dth_Hrt",
                                   "Dth_SrpsGrab",
                                   "Dth_HumShldStrain",
                                   "Dth_Snore",
                                   "Dth_Groan",
                                   "Dth_Dump",
                                   "Dth_PrpTssFrntAck",
                                   "Dth_Headlock",
                                   "Dth_Blinded",
                                   "Dth_BeeSting",
                                   "Dth_Grab",
                                   "Gen_Grt47",
                                   "Gen_GrtGrd47WGun",
                                   "Gen_GrtTrgt",
                                   "Gen_GrtTrgtRsp",
                                   "Gen_NPC2NPCGrt",
                                   "Gen_NPC2NPCRsp",
                                   "Gen_GtHlp",
                                   "Gen_GtHlpLd",
                                   "Gen_GtHlp47Knwn",
                                   "Gen_Mssng",
                                   "Gen_HMHere",
                                   "Gen_HMThere",
                                   "Gen_SrpsLow",
                                   "Gen_SrpsLowShort",
                                   "Gen_Srps",
                                   "Gen_SrpsLd",
                                   "Gen_StndRsp",
                                   "Gen_Stop",
                                   "Gen_StopLd",
                                   "Gen_Reveal",
                                   "Gen_ThumbsUp",
                                   "Gen_BrknAck",
                                   "Gen_Ack",
                                   "Gen_AckLd",
                                   "Gen_AckNtnse",
                                   "Gen_BumpAck",
                                   "Gen_Curse",
                                   "Gen_CurseLow",
                                   "Gen_DrpGun",
                                   "Gen_DrpCase",
                                   "Gen_CoinCurse",
                                   "Gen_TransportGreet",
                                   "Gen_Thanks",
                                   "Gen_ReturnItem2Guard",
                                   "Gen_NoWay1",
                                   "Gen_NoWay2Kidding",
                                   "Gen_NoWay3Joke",
                                   "Gen_NoWay44Real",
                                   "Gen_NoWay5DntBeliv",
                                   "Gen_NoWay6Serious",
                                   "Gen_NoWay7Horrible",
                                   "Gen_Way1",
                                   "Gen_Way2Kidding",
                                   "Gen_Way3Joke",
                                   "Gen_Way44Real",
                                   "Gen_Way5DntBeliv",
                                   "Gen_Way6Serious",
                                   "Gen_Way7Horrible",
                                   "Gen_NkdRunAck",
                                   "Gen_Grasp",
                                   "Gen_Amused",
                                   "Gen_Annoyed",
                                   "Gen_BdygrdArrive",
                                   "Gen_BdygrdMovOut",
                                   "Gen_GiveUp",
                                   "Gen_Off",
                                   "Gen_On",
                                   "Gen_PanicLow",
                                   "Gen_Sick",
                                   "Gen_SmellAck",
                                   "Gen_SmrtPhnAct",
                                   "Gen_PhoneAct",
                                   "Gen_OutbreakInfect",
                                   "Gen_OutbreakSick",
                                   "Gen_OutbreakWhine",
                                   "Gtag",
                                   "ClsCmbt_Ack",
                                   "ClsCmbt_Tnt",
                                   "Cmbt_BackupCll",
                                   "Cmbt_BadDsg",
                                   "Cmbt_Beg",
                                   "Cmbt_ClsAck",
                                   "Cmbt_Fire",
                                   "Cmbt_FireLdr",
                                   "Cmbt_GtHit",
                                   "Cmbt_HitHM",
                                   "Cmbt_HMClsCmbtAck",
                                   "Cmbt_HMCvr",
                                   "Cmbt_HMFire",
                                   "Cmbt_HMFlnk",
                                   "Cmbt_HMHeadPopr",
                                   "Cmbt_HMKll",
                                   "Cmbt_HMKllCiv",
                                   "Cmbt_HMKllName",
                                   "Cmbt_HMKllPrpTss",
                                   "Cmbt_HMMssTnt",
                                   "Cmbt_HMShrpShtr",
                                   "Cmbt_HMSpttd",
                                   "Cmbt_HMVnshd",
                                   "Cmbt_Hold",
                                   "Cmbt_HoldLdr",
                                   "Cmbt_HumShldRls1",
                                   "Cmbt_HumShldRls2",
                                   "Cmbt_HumShldRls3",
                                   "Cmbt_HumShldRlsFem1",
                                   "Cmbt_HumShldRlsFem2",
                                   "Cmbt_HumShldRlsFem3",
                                   "Cmbt_HumShldVctm",
                                   "Cmbt_HumShldLdr",
                                   "Cmbt_LngLst",
                                   "Cmbt_LngLstRsp",
                                   "Cmbt_LstMnStn",
                                   "Cmbt_LstSght",
                                   "Cmbt_LstSghtRsp",
                                   "Cmbt_NdrAttck",
                                   "Cmbt_Relod",
                                   "Cmbt_Scrm",
                                   "Cmbt_ThrowFlash",
                                   "Cmbt_ThrowFlashMiss",
                                   "Cmbt_ThrowFlashMiss2",
                                   "Cmbt_ThrowFlashWin",
                                   "Cmbt_ThrowFlashWin2",
                                   "Cmbt_TkDwnLdr",
                                   "Cmbt_VntAck",
                                   "Cmbt_Whmp",
                                   "Cmbt_StalemateHold",
                                   "Cmbt_StalemateTnt",
                                   "Cmbt_TriggerTheAlarm",
                                   "Cmbt_47Mpty",
                                   "Cmbt_47SuperSize",
                                   "Evac_PrtTrgtSolo",
                                   "Evac_PrtTrgtAck",
                                   "Evac_PrtTrgtAckLdr",
                                   "Evac_PrtTrgtEscrt",
                                   "Evac_PrtTrgtStop",
                                   "Evac_PrtTrgtStnd",
                                   "Evac_PrtTrgtStndRsp",
                                   "Evac_Cornered",
                                   "Evac_MovOut",
                                   "Evac_PathChange",
                                   "Evac_PeelOff",
                                   "Evac_LastPeelOff",
                                   "Evac_ShltrArrv",
                                   "Evac_ShltrBad",
                                   "Evac_ShltrLdr",
                                   "Evac_ShltrRsp",
                                   "Evac_TrgtHitRsp",
                                   "AvoidXplo_Ack",
                                   "AvoidXplo_Stnd",
                                   "Ar_47BadAction",
                                   "Ar_47X",
                                   "Ar_BadDsg",
                                   "Ar_BlmeKll",
                                   "Ar_BlameKnckDwn",
                                   "Ar_BlameKnckDwnPT",
                                   "Ar_BlameKllPT",
                                   "Ar_47BadActionPT",
                                   "Ar_DrgBody",
                                   "Ar_FkeSrrdrTnt",
                                   "Ar_HMDoor",
                                   "Ar_Strangle",
                                   "Ar_Trspss",
                                   "Ar_WeapWrn1",
                                   "Ar_WeapWrn2",
                                   "Ar_Wrn1",
                                   "Ar_Wrn2",
                                   "Ar_Wrn3",
                                   "Ar_VictimAck",
                                   "Ar_Thief",
                                   "Ar_Rsp",
                                   "Sniper_Ack",
                                   "InCa_BackupCll",
                                   "InCa_ChckCvr",
                                   "InCa_CivRptFail",
                                   "InCa_CivUpset",
                                   "InCa_ClstTnt",
                                   "InCa_HMTnt",
                                   "InCa_Idle",
                                   "InCa_NitiateHMKnwn",
                                   "InCa_SrchLdr",
                                   "InCa_Stnd",
                                   "InCa_StndAgtd",
                                   "InCa_StndAgtdLdr",
                                   "InCa_StndAgtdHMKnwn",
                                   "InCa_StndAgtdHMKnwnLdr",
                                   "InCa_StndHMKnwn",
                                   "InCa_StndHMKnwnLdr",
                                   "InCa_StndLdr",
                                   "InCa_StndRsp",
                                   "InCa_StndLckDwnFlsAlrm",
                                   "InCa_VntTnt",
                                   "InCa_Brk2Civ",
                                   "InCa_Brk2Grd",
                                   "InCa_Brk2Rdo",
                                   "InCa_BrkAsk",
                                   "InCa_GhostAsk",
                                   "InCa_TriggerTheAlarm",
                                   "InCa_Xpln47Thief",
                                   "InCa_DstrssInv",
                                   "InCa_DstrssLdr",
                                   "InCa_DstrssInvLdr",
                                   "InCa_WakeAsk",
                                   "InCa_47Rcall",
                                   "InCa_WakerStnd",
                                   "InCa_ClsCmbtAck",
                                   "InCa_SeeDthInv",
                                   "InCa_SeeDthInvLdr",
                                   "InCa_SeeDthLdr",
                                   "InCa_XploInv",
                                   "InCa_XploInvLdr",
                                   "InCa_XploLdr",
                                   "InCa_AlarmAck",
                                   "InCa_GnShtInv",
                                   "InCa_GnShtInvLdr",
                                   "InCa_GnShtLdr",
                                   "InCa_RecurSvrInv",
                                   "InCa_RecurSvrInvLdr",
                                   "InCa_RecurSvrInvRsp",
                                   "InCa_RecurSvrLdr",
                                   "InCa_RecurSvrRsp",
                                   "InCa_LckDwnGtOutLdr",
                                   "InCa_LckDwnGtOutRsp",
                                   "InCa_LckDwnWrn1",
                                   "InCa_LckDwnWrn2",
                                   "InCa_LckDwnWrn3",
                                   "InCa_LckDwnCivCmnt",
                                   "InCa_FrskAck",
                                   "InCa_Frsk",
                                   "InCa_FrskCln",
                                   "InCa_FrskWpn",
                                   "InCa_Xpln47Wpn",
                                   "InCa_XplnAccdnt",
                                   "InCa_XplnDedBdy",
                                   "InCa_XplnDedBdyMassive",
                                   "InCa_XplnDrgBdy",
                                   "InCa_XplnDstrss",
                                   "InCa_XplnExplo",
                                   "InCa_XplnGhost",
                                   "InCa_XplnGnsht",
                                   "InCa_XplnNkdBdy",
                                   "InCa_XplnPcfdBdy",
                                   "InCa_XplnSeeDth",
                                   "InCa_XplnTrspss",
                                   "InCa_XplnX",
                                   "InCa_XplnWpn",
                                   "InCa_XplnDsg",
                                   "InCa_XplnImposter",
                                   "InCa_XplnRecurSvr",
                                   "InCa_XplnRsp",
                                   "InCa_XplnAckRdo",
                                   "InCa_XplnKnckDwn",
                                   "InCa_XplnKnckDwnVctm",
                                   "InCa_XplnKnckDwnGhost",
                                   "InCa_XplnSeeStrngl",
                                   "InCa_XplnHuntTargetWin",
                                   "InCa_XplnHuntTargetFail",
                                   "InCa_VIPDownAck",
                                   "InCa_VIPKillAck",
                                   "Accdnt_Inv",
                                   "InDedBdy_BloodPllAck",
                                   "InDedBdy_Ack",
                                   "InDedBdy_NkdAck",
                                   "InDedBdy_Inv",
                                   "InDedBdy_BllPllRpt",
                                   "InDedBdy_Massive",
                                   "InDedBdy_PcfdInv",
                                   "InDedBdy_CntnAck",
                                   "InDedBdy_Stnd",
                                   "InDedBdy_CircleBdy",
                                   "InDedBdy_CivCmnt",
                                   "InDedBdy_PrmtrBrchWrn1",
                                   "InDedBdy_PrmtrBrchWrn2",
                                   "InDedBdy_47AsGrdAck",
                                   "InDedBdy_BodyGone",
                                   "InDedBdy_VctmRcvr",
                                   "InDedBdy_WakerWake",
                                   "InDedBdy_WakeRsp",
                                   "InDedBdy_WakeNkdLdr",
                                   "InDedBdy_WakeNkdRsp",
                                   "Rcvr_Xpln47",
                                   "Rcvr_XplnDsg",
                                   "Rcvr_XplnKnckDwn",
                                   "InDsg_FllwWrn1",
                                   "InDsg_FllwWrn2",
                                   "InDsg_FllwWrn3",
                                   "InDsg_Pzzl",
                                   "InDsg_Stnd",
                                   "InDsg_StndDistance",
                                   "InDsg_StndHidden",
                                   "InDsg_HdNPlnSght",
                                   "InDsg_FllwWrn1Ack",
                                   "InDsg_FllwWrn1BadAction",
                                   "InDsg_FllwWrn1Wpn",
                                   "InDsg_FllwWrn1BadSound",
                                   "InDsg_FllwWrnJoinr",
                                   "InDsg_FllwWrn1ShadyItem",
                                   "Trspss_Stnd",
                                   "Trspss_Wrn1",
                                   "Trspss_Wrn2",
                                   "Trspss_Wrn3",
                                   "Trspss_Rsp",
                                   "Trspss_SrchAckLegal47",
                                   "Trspss_EscortAck",
                                   "Trspss_EscortRequest",
                                   "Trspss_EscortRequestRepeat",
                                   "Trspss_EscortStayClose",
                                   "Trspss_EscortOk",
                                   "Trspss_EscortStnd",
                                   "Trspss_EscortArrest",
                                   "Trspss_EscortExit",
                                   "Trspss_EscortStayRequest",
                                   "InCu_Brk2Rdo",
                                   "InCu_CivCmnd",
                                   "InCu_Stnd",
                                   "InCu_CivRsp",
                                   "InCu_BackupRqst",
                                   "InCu_CrAlrmAck",
                                   "InCu_CrAlrmLdr",
                                   "InCu_CrAlrmStndRsp",
                                   "InCu_FtStpsAck",
                                   "InCu_FtStpsStnd",
                                   "InCu_PrpTssHearAck",
                                   "InCu_PrpTssHearInv",
                                   "InCu_PrpTssHearLdr",
                                   "InCu_PrpTssHearStndRsp",
                                   "InCu_PrpTssSeeAck",
                                   "InCu_PrpTssSeeInv",
                                   "InCu_PrpTssSeeLdr",
                                   "InCu_PrpTssSeeStndRsp",
                                   "InCu_RdoAck",
                                   "InCu_RdoInv",
                                   "InCu_RdoLdr",
                                   "InCu_RdoStndRsp",
                                   "InCu_WpnInv",
                                   "InCu_RecurAck",
                                   "InCu_RecurInv",
                                   "InCu_RecurLdr",
                                   "InCu_RecurRsp",
                                   "InCu_ItemAckLdr",
                                   "InCu_CrAlrmStndStndRsp",
                                   "InCu_EscrtTrgtRedLight",
                                   "InCu_EscrtTrgtGreenLight",
                                   "InSt_HMAglty",
                                   "InSt_HMBz",
                                   "InSt_HMBzStnd",
                                   "InSt_HMEntXit",
                                   "InSt_HMInCvr",
                                   "InSt_HMSnkng",
                                   "InSt_PrpTssSee",
                                   "InSt_Stnd",
                                   "InSt_Wrn",
                                   "InSt_HM2Cls",
                                   "InSt_SickAck",
                                   "InSt_AdiosRequest",
                                   "InSt_PQ",
                                   "FseBx_Fixed",
                                   "FseBx_Fixing",
                                   "FseBx_GoFix",
                                   "FseBx_SabAck",
                                   "Sentry_DenyEntry",
                                   "Sentry_Frsk",
                                   "Sentry_FrskRequest",
                                   "Sentry_ItemRequest",
                                   "Sentry_Accepted",
                                   "Sentry_FrskWpnAck",
                                   "Sentry_47LoiterAck",
                                   "Sentry_DenyDsg",
                                   "Sentry_PostCommentLdr",
                                   "Sentry_PostCommentRsp",
                                   "VIP_MssgnA_Ldr",
                                   "VIP_MssgnB_Rsp",
                                   "VIP_MssgnC_Ldr",
                                   "VIP_MssgnD_Rsp",
                                   "VIP_MssngCallOut",
                                   "Dth_Sick",
                                   "Dth_Poison",
                                   "Gen_Avoid",
                                   "Gen_CloseCall",
                                   "Gen_PhnPckUP",
                                   "Gen_PhoneActLockdown",
                                   "Cmbt_FlushOutLdr",
                                   "Cmbt_HMPrptssKnckOut",
                                   "InCa_FrskHeadsUpLdr",
                                   "InCa_FrskHeadsUpRdo",
                                   "InCa_XplnLOS",
                                   "InCa_XplnGotShot",
                                   "InDedBdy_CivCmntPhone",
                                   "InDedBdy_NoFaulVctmXpln",
                                   "InDsg_FllwWrn1Nkd",
                                   "Ar_BlameKnckDwnMelee",
                                   "Exp_Carry",
                                   "Exp_ClearThroat",
                                   "Exp_Cough",
                                   "Exp_Drink",
                                   "Exp_Exhale",
                                   "Exp_Idle",
                                   "Exp_Inhale",
                                   "Exp_InhaleFast",
                                   "Exp_Sniff",
                                   "Exp_Swallow",
                                   "Exp_Think",
                                   "Exp_Scared",
                                   "Exp_Gld",
                                   "Exp_Dsppntd",
                                   "Exp_InPain",
                                   "InCa_AckBdy",
                                   "InCa_AckBdyLdr",
                                   "InDedBdy_CivCmntPcfd",
                                   "InDedBdy_CivCmntPhonePcfd",
                                   "Gen_SocialAck"};
};