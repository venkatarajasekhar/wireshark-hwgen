/*  This file is autogenerated from ./taps by ./make-taps.pl */
/* DO NOT EDIT! */

#include "config.h"

#include "wslua.h"

#include "../dissectors/packet-ip.h"
static void wslua_ip_to_table(lua_State* L, const void* p) { const ws_ip* v _U_; v = (const ws_ip*)p; lua_newtable(L);
	lua_pushstring(L,"ip_dst"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->ip_dst)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"ip_id"); lua_pushnumber(L,(lua_Number)v->ip_id); lua_settable(L,-3);
	lua_pushstring(L,"ip_len"); lua_pushnumber(L,(lua_Number)v->ip_len); lua_settable(L,-3);
	lua_pushstring(L,"ip_off"); lua_pushnumber(L,(lua_Number)v->ip_off); lua_settable(L,-3);
	lua_pushstring(L,"ip_p"); lua_pushnumber(L,(lua_Number)v->ip_p); lua_settable(L,-3);
	lua_pushstring(L,"ip_src"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->ip_src)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"ip_sum"); lua_pushnumber(L,(lua_Number)v->ip_sum); lua_settable(L,-3);
	lua_pushstring(L,"ip_tos"); lua_pushnumber(L,(lua_Number)v->ip_tos); lua_settable(L,-3);
	lua_pushstring(L,"ip_ttl"); lua_pushnumber(L,(lua_Number)v->ip_ttl); lua_settable(L,-3);
	lua_pushstring(L,"ip_v_hl"); lua_pushnumber(L,(lua_Number)v->ip_v_hl); lua_settable(L,-3);
}

#include "../dissectors/packet-udp.h"
static void wslua_udp_to_table(lua_State* L, const void* p) { const e_udphdr* v _U_; v = (const e_udphdr*)p; lua_newtable(L);
	lua_pushstring(L,"ip_dst"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->ip_dst)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"ip_src"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->ip_src)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"uh_dport"); lua_pushnumber(L,(lua_Number)v->uh_dport); lua_settable(L,-3);
	lua_pushstring(L,"uh_sport"); lua_pushnumber(L,(lua_Number)v->uh_sport); lua_settable(L,-3);
	lua_pushstring(L,"uh_stream"); lua_pushnumber(L,(lua_Number)v->uh_stream); lua_settable(L,-3);
	lua_pushstring(L,"uh_sum"); lua_pushnumber(L,(lua_Number)v->uh_sum); lua_settable(L,-3);
	lua_pushstring(L,"uh_sum_cov"); lua_pushnumber(L,(lua_Number)v->uh_sum_cov); lua_settable(L,-3);
	lua_pushstring(L,"uh_ulen"); lua_pushnumber(L,(lua_Number)v->uh_ulen); lua_settable(L,-3);
}

#include "../dissectors/packet-http.h"
static void wslua_http_to_table(lua_State* L, const void* p) { const http_info_value_t* v _U_; v = (const http_info_value_t*)p; lua_newtable(L);
	lua_pushstring(L,"framenum"); lua_pushnumber(L,(lua_Number)v->framenum); lua_settable(L,-3);
	lua_pushstring(L,"http_host"); lua_pushstring(L,(const char*)v->http_host); lua_settable(L,-3);
	lua_pushstring(L,"request_method"); lua_pushstring(L,(const char*)v->request_method); lua_settable(L,-3);
	lua_pushstring(L,"response_code"); lua_pushnumber(L,(lua_Number)v->response_code); lua_settable(L,-3);
}

#include "../dissectors/packet-bacapp.h"
static void wslua_bacapp_to_table(lua_State* L, const void* p) { const bacapp_info_value_t* v _U_; v = (const bacapp_info_value_t*)p; lua_newtable(L);
}

#include "../dissectors/packet-h225.h"
static void wslua_h225_to_table(lua_State* L, const void* p) { const h225_packet_info* v _U_; v = (const h225_packet_info*)p; lua_newtable(L);
	lua_pushstring(L,"cs_type"); /*h225_cs_type*/ lua_pushnumber(L,(lua_Number)v->cs_type); lua_settable(L,-3);
	lua_pushstring(L,"delta_time"); {lua_Number t = (lua_Number) v->delta_time.secs; t += v->delta_time.nsecs * 1e-9; lua_pushnumber(L,t); } lua_settable(L,-3);
	lua_pushstring(L,"dialedDigits"); lua_pushstring(L,(const char*)v->dialedDigits); lua_settable(L,-3);
	lua_pushstring(L,"frame_label"); lua_pushstring(L,(const char*)v->frame_label); lua_settable(L,-3);
	lua_pushstring(L,"h245_address"); lua_pushnumber(L,(lua_Number)v->h245_address); lua_settable(L,-3);
	lua_pushstring(L,"h245_port"); lua_pushnumber(L,(lua_Number)v->h245_port); lua_settable(L,-3);
	lua_pushstring(L,"is_destinationInfo"); lua_pushboolean(L,(int)v->is_destinationInfo); lua_settable(L,-3);
	lua_pushstring(L,"is_duplicate"); lua_pushboolean(L,(int)v->is_duplicate); lua_settable(L,-3);
	lua_pushstring(L,"is_faststart"); lua_pushboolean(L,(int)v->is_faststart); lua_settable(L,-3);
	lua_pushstring(L,"is_h245"); lua_pushboolean(L,(int)v->is_h245); lua_settable(L,-3);
	lua_pushstring(L,"is_h245Tunneling"); lua_pushboolean(L,(int)v->is_h245Tunneling); lua_settable(L,-3);
	lua_pushstring(L,"msg_tag"); lua_pushnumber(L,(lua_Number)v->msg_tag); lua_settable(L,-3);
	lua_pushstring(L,"msg_type"); /*h225_msg_type*/ lua_pushnumber(L,(lua_Number)v->msg_type); lua_settable(L,-3);
	lua_pushstring(L,"reason"); lua_pushnumber(L,(lua_Number)v->reason); lua_settable(L,-3);
	lua_pushstring(L,"requestSeqNum"); lua_pushnumber(L,(lua_Number)v->requestSeqNum); lua_settable(L,-3);
	lua_pushstring(L,"request_available"); lua_pushboolean(L,(int)v->request_available); lua_settable(L,-3);
}

#include "../dissectors/packet-actrace.h"
static void wslua_actrace_to_table(lua_State* L, const void* p) { const actrace_info_t* v _U_; v = (const actrace_info_t*)p; lua_newtable(L);
	lua_pushstring(L,"cas_bchannel"); lua_pushnumber(L,(lua_Number)v->cas_bchannel); lua_settable(L,-3);
	lua_pushstring(L,"direction"); lua_pushnumber(L,(lua_Number)v->direction); lua_settable(L,-3);
	lua_pushstring(L,"trunk"); lua_pushnumber(L,(lua_Number)v->trunk); lua_settable(L,-3);
	lua_pushstring(L,"type"); lua_pushnumber(L,(lua_Number)v->type); lua_settable(L,-3);
}

#include "../dissectors/packet-ansi_a.h"
static void wslua_ansi_a_to_table(lua_State* L, const void* p) { const ansi_a_tap_rec_t* v _U_; v = (const ansi_a_tap_rec_t*)p; lua_newtable(L);
	lua_pushstring(L,"message_type"); lua_pushnumber(L,(lua_Number)v->message_type); lua_settable(L,-3);
	lua_pushstring(L,"pdu_type"); lua_pushnumber(L,(lua_Number)v->pdu_type); lua_settable(L,-3);
}

#include "../dissectors/packet-ansi_map.h"
static void wslua_ansi_map_to_table(lua_State* L, const void* p) { const ansi_map_tap_rec_t* v _U_; v = (const ansi_map_tap_rec_t*)p; lua_newtable(L);
	lua_pushstring(L,"message_type"); lua_pushnumber(L,(lua_Number)v->message_type); lua_settable(L,-3);
	lua_pushstring(L,"size"); lua_pushnumber(L,(lua_Number)v->size); lua_settable(L,-3);
}

#include "../dissectors/packet-eth.h"
static void wslua_eth_to_table(lua_State* L, const void* p) { const eth_hdr* v _U_; v = (const eth_hdr*)p; lua_newtable(L);
	lua_pushstring(L,"dst"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->dst)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"src"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->src)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"type"); lua_pushnumber(L,(lua_Number)v->type); lua_settable(L,-3);
}

#include "../dissectors/packet-ldap.h"
static void wslua_ldap_to_table(lua_State* L, const void* p) { const ldap_call_response_t* v _U_; v = (const ldap_call_response_t*)p; lua_newtable(L);
	lua_pushstring(L,"is_request"); lua_pushboolean(L,(int)v->is_request); lua_settable(L,-3);
	lua_pushstring(L,"messageId"); lua_pushnumber(L,(lua_Number)v->messageId); lua_settable(L,-3);
	lua_pushstring(L,"protocolOpTag"); lua_pushnumber(L,(lua_Number)v->protocolOpTag); lua_settable(L,-3);
	lua_pushstring(L,"rep_frame"); lua_pushnumber(L,(lua_Number)v->rep_frame); lua_settable(L,-3);
	lua_pushstring(L,"req_frame"); lua_pushnumber(L,(lua_Number)v->req_frame); lua_settable(L,-3);
	lua_pushstring(L,"req_time"); {lua_Number t = (lua_Number) v->req_time.secs; t += v->req_time.nsecs * 1e-9; lua_pushnumber(L,t); } lua_settable(L,-3);
}

#include "../dissectors/packet-smb.h"
static void wslua_smb_to_table(lua_State* L, const void* p) { const smb_info_t* v _U_; v = (const smb_info_t*)p; lua_newtable(L);
	lua_pushstring(L,"cmd"); lua_pushnumber(L,(lua_Number)v->cmd); lua_settable(L,-3);
	lua_pushstring(L,"info_count"); lua_pushnumber(L,(lua_Number)v->info_count); lua_settable(L,-3);
	lua_pushstring(L,"info_level"); lua_pushnumber(L,(lua_Number)v->info_level); lua_settable(L,-3);
	lua_pushstring(L,"nt_status"); lua_pushnumber(L,(lua_Number)v->nt_status); lua_settable(L,-3);
	lua_pushstring(L,"request"); lua_pushboolean(L,(int)v->request); lua_settable(L,-3);
	lua_pushstring(L,"unicode"); lua_pushboolean(L,(int)v->unicode); lua_settable(L,-3);
	lua_pushstring(L,"unidir"); lua_pushboolean(L,(int)v->unidir); lua_settable(L,-3);
}

#include "../dissectors/packet-smb2.h"
static void wslua_smb2_to_table(lua_State* L, const void* p) { const smb2_info_t* v _U_; v = (const smb2_info_t*)p; lua_newtable(L);
	lua_pushstring(L,"flags"); lua_pushnumber(L,(lua_Number)v->flags); lua_settable(L,-3);
	lua_pushstring(L,"ioctl_function"); lua_pushnumber(L,(lua_Number)v->ioctl_function); lua_settable(L,-3);
	lua_pushstring(L,"opcode"); lua_pushnumber(L,(lua_Number)v->opcode); lua_settable(L,-3);
	lua_pushstring(L,"status"); lua_pushnumber(L,(lua_Number)v->status); lua_settable(L,-3);
	lua_pushstring(L,"tid"); lua_pushnumber(L,(lua_Number)v->tid); lua_settable(L,-3);
}

#include "../dissectors/packet-tcp.h"
static void wslua_tcp_to_table(lua_State* L, const void* p) { const tcp_info_t* v _U_; v = (const tcp_info_t*)p; lua_newtable(L);
	lua_pushstring(L,"ip_dst"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->ip_dst)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"ip_src"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->ip_src)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"num_sack_ranges"); lua_pushnumber(L,(lua_Number)v->num_sack_ranges); lua_settable(L,-3);
	lua_pushstring(L,"th_ack"); lua_pushnumber(L,(lua_Number)v->th_ack); lua_settable(L,-3);
	lua_pushstring(L,"th_dport"); lua_pushnumber(L,(lua_Number)v->th_dport); lua_settable(L,-3);
	lua_pushstring(L,"th_flags"); lua_pushnumber(L,(lua_Number)v->th_flags); lua_settable(L,-3);
	lua_pushstring(L,"th_have_seglen"); lua_pushboolean(L,(int)v->th_have_seglen); lua_settable(L,-3);
	lua_pushstring(L,"th_hlen"); lua_pushnumber(L,(lua_Number)v->th_hlen); lua_settable(L,-3);
	lua_pushstring(L,"th_seglen"); lua_pushnumber(L,(lua_Number)v->th_seglen); lua_settable(L,-3);
	lua_pushstring(L,"th_seq"); lua_pushnumber(L,(lua_Number)v->th_seq); lua_settable(L,-3);
	lua_pushstring(L,"th_sport"); lua_pushnumber(L,(lua_Number)v->th_sport); lua_settable(L,-3);
	lua_pushstring(L,"th_stream"); lua_pushnumber(L,(lua_Number)v->th_stream); lua_settable(L,-3);
	lua_pushstring(L,"th_win"); lua_pushnumber(L,(lua_Number)v->th_win); lua_settable(L,-3);
}

#include "../dissectors/packet-ieee80211.h"
static void wslua_wlan_to_table(lua_State* L, const void* p) { const wlan_hdr* v _U_; v = (const wlan_hdr*)p; lua_newtable(L);
	lua_pushstring(L,"bssid"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->bssid)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"dst"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->dst)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"src"); { Address a = (Address)g_malloc(sizeof(address)); COPY_ADDRESS(a, &(v->src)); pushAddress(L,a); } lua_settable(L,-3);
	lua_pushstring(L,"type"); lua_pushnumber(L,(lua_Number)v->type); lua_settable(L,-3);
}

static tappable_t tappables[] =  {
	{"actrace", wslua_actrace_to_table },
	{"ansi_a", wslua_ansi_a_to_table },
	{"ansi_map", wslua_ansi_map_to_table },
	{"bacapp", wslua_bacapp_to_table },
	{"eth", wslua_eth_to_table },
	{"h225", wslua_h225_to_table },
	{"http", wslua_http_to_table },
	{"ip", wslua_ip_to_table },
	{"ldap", wslua_ldap_to_table },
	{"smb", wslua_smb_to_table },
	{"smb2", wslua_smb2_to_table },
	{"tcp", wslua_tcp_to_table },
	{"udp", wslua_udp_to_table },
	{"wlan", wslua_wlan_to_table },
	{"frame",NULL},
	{NULL,NULL}
};

int wslua_set_tap_enums(lua_State* L _U_) {

	/*
	 * h225_cs_type
	 */
	lua_newtable(L);
		lua_pushnumber(L,(lua_Number)H225_SETUP); lua_setglobal(L,"H225_SETUP");
		lua_pushnumber(L,(lua_Number)H225_SETUP); lua_pushstring(L,"H225_SETUP"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_CALL_PROCEDING); lua_setglobal(L,"H225_CALL_PROCEDING");
		lua_pushnumber(L,(lua_Number)H225_CALL_PROCEDING); lua_pushstring(L,"H225_CALL_PROCEDING"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_CONNECT); lua_setglobal(L,"H225_CONNECT");
		lua_pushnumber(L,(lua_Number)H225_CONNECT); lua_pushstring(L,"H225_CONNECT"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_ALERTING); lua_setglobal(L,"H225_ALERTING");
		lua_pushnumber(L,(lua_Number)H225_ALERTING); lua_pushstring(L,"H225_ALERTING"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_INFORMATION); lua_setglobal(L,"H225_INFORMATION");
		lua_pushnumber(L,(lua_Number)H225_INFORMATION); lua_pushstring(L,"H225_INFORMATION"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_RELEASE_COMPLET); lua_setglobal(L,"H225_RELEASE_COMPLET");
		lua_pushnumber(L,(lua_Number)H225_RELEASE_COMPLET); lua_pushstring(L,"H225_RELEASE_COMPLET"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_FACILITY); lua_setglobal(L,"H225_FACILITY");
		lua_pushnumber(L,(lua_Number)H225_FACILITY); lua_pushstring(L,"H225_FACILITY"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_PROGRESS); lua_setglobal(L,"H225_PROGRESS");
		lua_pushnumber(L,(lua_Number)H225_PROGRESS); lua_pushstring(L,"H225_PROGRESS"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_EMPTY); lua_setglobal(L,"H225_EMPTY");
		lua_pushnumber(L,(lua_Number)H225_EMPTY); lua_pushstring(L,"H225_EMPTY"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_STATUS); lua_setglobal(L,"H225_STATUS");
		lua_pushnumber(L,(lua_Number)H225_STATUS); lua_pushstring(L,"H225_STATUS"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_STATUS_INQUIRY); lua_setglobal(L,"H225_STATUS_INQUIRY");
		lua_pushnumber(L,(lua_Number)H225_STATUS_INQUIRY); lua_pushstring(L,"H225_STATUS_INQUIRY"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_SETUP_ACK); lua_setglobal(L,"H225_SETUP_ACK");
		lua_pushnumber(L,(lua_Number)H225_SETUP_ACK); lua_pushstring(L,"H225_SETUP_ACK"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_NOTIFY); lua_setglobal(L,"H225_NOTIFY");
		lua_pushnumber(L,(lua_Number)H225_NOTIFY); lua_pushstring(L,"H225_NOTIFY"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_OTHER); lua_setglobal(L,"H225_OTHER");
		lua_pushnumber(L,(lua_Number)H225_OTHER); lua_pushstring(L,"H225_OTHER"); lua_settable(L,-3);
	lua_setglobal(L,"h225_cs_type");

	/*
	 * h225_msg_type
	 */
	lua_newtable(L);
		lua_pushnumber(L,(lua_Number)H225_RAS); lua_setglobal(L,"H225_RAS");
		lua_pushnumber(L,(lua_Number)H225_RAS); lua_pushstring(L,"H225_RAS"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_CS); lua_setglobal(L,"H225_CS");
		lua_pushnumber(L,(lua_Number)H225_CS); lua_pushstring(L,"H225_CS"); lua_settable(L,-3);
		lua_pushnumber(L,(lua_Number)H225_OTHERS); lua_setglobal(L,"H225_OTHERS");
		lua_pushnumber(L,(lua_Number)H225_OTHERS); lua_pushstring(L,"H225_OTHERS"); lua_settable(L,-3);
	lua_setglobal(L,"h225_msg_type");
	return 0;
}


tap_extractor_t wslua_get_tap_extractor(const gchar* name) {
	tappable_t* t;
	for(t = tappables; t->name; t++ ) {
		if (g_str_equal(t->name,name)) return t->extractor;
	}
	
	return NULL;
}

