/* DO NOT EDIT: automatically built by dist/s_include. */
#ifndef	_log_ext_h_
#define	_log_ext_h_

#if defined(__cplusplus)
extern "C" {
#endif

int __log_open __P((ENV *, int));
int __log_find __P((DB_LOG *, int, u_int32_t *, logfile_validity *));
int __log_valid __P((DB_LOG *, u_int32_t, int, DB_FH **, u_int32_t, logfile_validity *, u_int32_t *));
int __log_env_refresh __P((ENV *));
int __log_get_cached_ckp_lsn __P((ENV *, DB_LSN *));
u_int32_t __log_region_mutex_count __P((ENV *));
int __log_vtruncate __P((ENV *, DB_LSN *, DB_LSN *, DB_LSN *));
int __log_is_outdated __P((ENV *, u_int32_t, int *));
int __log_zero __P((ENV *, DB_LSN *));
int __log_inmem_lsnoff __P((DB_LOG *, DB_LSN *, size_t *));
int __log_inmem_newfile __P((DB_LOG *, u_int32_t));
int __log_inmem_chkspace __P((DB_LOG *, size_t));
void __log_inmem_copyout __P((DB_LOG *, size_t, void *, size_t));
void __log_inmem_copyin __P((DB_LOG *, size_t, void *, size_t));
void __log_set_version __P((ENV *, u_int32_t));
int __log_get_oldversion __P((ENV *, u_int32_t *));
int __log_archive_pp __P((DB_ENV *, char **[], u_int32_t));
int __log_get_stable_lsn __P((ENV *, DB_LSN *, int));
void __log_autoremove __P((ENV *));
int __log_check_page_lsn __P((ENV *, DB *, DB_LSN *));
int __log_printf_capi __P((DB_ENV *, DB_TXN *, const char *, ...)) __attribute__ ((__format__ (__printf__, 3, 4)));
int __log_printf_pp __P((DB_ENV *, DB_TXN *, const char *, va_list));
int __log_printf __P((ENV *, DB_TXN *, const char *, ...)) __attribute__ ((__format__ (__printf__, 3, 4)));
int __log_cursor_pp __P((DB_ENV *, DB_LOGC **, u_int32_t));
int __log_cursor __P((ENV *, DB_LOGC **));
int __logc_close __P((DB_LOGC *));
int __logc_version __P((DB_LOGC *, u_int32_t *));
int __logc_get __P((DB_LOGC *, DB_LSN *, DBT *, u_int32_t));
void __log_hdrswap __P((HDR *, int));
void __log_persistswap __P((LOGP *));
int __log_rep_split __P((ENV *, DB_THREAD_INFO *, __rep_control_args *, DBT *, DB_LSN *, DB_LSN *));
int __log_read_record_pp  __P((DB_ENV *, DB **, void *, void *, DB_LOG_RECSPEC *, u_int32_t, void **));
int __log_read_record  __P((ENV *, DB **, void *, void *, DB_LOG_RECSPEC *, u_int32_t, void **));
int __log_env_create __P((DB_ENV *));
void __log_env_destroy __P((DB_ENV *));
int __log_get_lg_bsize __P((DB_ENV *, u_int32_t *));
int __log_set_lg_bsize __P((DB_ENV *, u_int32_t));
int __log_get_lg_filemode __P((DB_ENV *, int *));
int __log_set_lg_filemode __P((DB_ENV *, int));
int __log_get_lg_max __P((DB_ENV *, u_int32_t *));
int __log_set_lg_max __P((DB_ENV *, u_int32_t));
int __log_get_lg_regionmax __P((DB_ENV *, u_int32_t *));
int __log_set_lg_regionmax __P((DB_ENV *, u_int32_t));
int __log_get_lg_dir __P((DB_ENV *, const char **));
int __log_set_lg_dir __P((DB_ENV *, const char *));
void __log_get_flags __P((DB_ENV *, u_int32_t *));
void __log_set_flags __P((ENV *, u_int32_t, int));
int __log_get_config __P((DB_ENV *, u_int32_t, int *));
int __log_set_config __P((DB_ENV *, u_int32_t, int));
int __log_set_config_int __P((DB_ENV *, u_int32_t, int, int));
int __log_check_sizes __P((ENV *, u_int32_t, u_int32_t));
int __log_print_record  __P((ENV *, DBT *, DB_LSN *, char *, DB_LOG_RECSPEC *, void *));
int __log_put_pp __P((DB_ENV *, DB_LSN *, const DBT *, u_int32_t));
int __log_put __P((ENV *, DB_LSN *, const DBT *, u_int32_t));
int __log_current_lsn __P((ENV *, DB_LSN *, u_int32_t *, u_int32_t *));
int __log_newfile __P((DB_LOG *, DB_LSN *, u_int32_t, u_int32_t));
int __log_flush_pp __P((DB_ENV *, const DB_LSN *));
int __log_flush __P((ENV *, const DB_LSN *));
int __log_flush_int __P((DB_LOG *, const DB_LSN *, int));
int __log_file_pp __P((DB_ENV *, const DB_LSN *, char *, size_t));
int __log_name __P((DB_LOG *, u_int32_t, char **, DB_FH **, u_int32_t));
int __log_rep_put __P((ENV *, DB_LSN *, const DBT *, u_int32_t));
int __log_put_record_pp __P((DB_ENV *, DB *, DB_TXN *, DB_LSN *, u_int32_t, u_int32_t, u_int32_t, u_int32_t, DB_LOG_RECSPEC *, ...));
int __log_put_record __P((ENV *, DB *, DB_TXN *, DB_LSN *, u_int32_t, u_int32_t, u_int32_t, u_int32_t, DB_LOG_RECSPEC *, ...));
int __log_stat_pp __P((DB_ENV *, DB_LOG_STAT **, u_int32_t));
int __log_stat_print_pp __P((DB_ENV *, u_int32_t));
int __log_stat_print __P((ENV *, u_int32_t));
int __log_verify_pp __P((DB_ENV *, const DB_LOG_VERIFY_CONFIG *));
int __log_verify __P((DB_ENV *, const DB_LOG_VERIFY_CONFIG *, DB_THREAD_INFO *));
int __log_verify_wrap __P((ENV *, const char *, u_int32_t, const char *, const char *, time_t, time_t, u_int32_t, u_int32_t, u_int32_t, u_int32_t, int, int));
int __crdel_init_verify __P((ENV *, DB_DISTAB *));
int __db_init_verify __P((ENV *, DB_DISTAB *));
int __dbreg_init_verify __P((ENV *, DB_DISTAB *));
int __bam_init_verify __P((ENV *, DB_DISTAB *));
int __fop_init_verify __P((ENV *, DB_DISTAB *));
int __ham_init_verify __P((ENV *, DB_DISTAB *));
int __qam_init_verify __P((ENV *, DB_DISTAB *));
int __txn_init_verify __P((ENV *, DB_DISTAB *));
void __db_log_verify_global_report __P((const DB_LOG_VRFY_INFO *));
int __crdel_metasub_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_create_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_rename_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __crdel_inmem_remove_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_addrem_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_big_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_ovref_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_relink_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_debug_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_noop_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_alloc_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_alloc_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_free_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_free_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_cksum_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_freedata_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_freedata_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_init_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_sort_44_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pg_trunc_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_realloc_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_relink_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_merge_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __db_pgno_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __dbreg_register_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_split_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_split_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_rsplit_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_adj_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_irep_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_cadjust_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_cdel_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_repl_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_root_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_curadj_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_rcuradj_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_relink_43_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __bam_merge_44_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_create_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_create_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_remove_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_write_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_write_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_rename_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_rename_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __fop_file_remove_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_insdel_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_newpage_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_splitdata_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_replace_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_copypage_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_metagroup_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_metagroup_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_groupalloc_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_groupalloc_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_changeslot_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_contract_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_curadj_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __ham_chgpg_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __qam_incfirst_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __qam_mvptr_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __qam_del_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __qam_add_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __qam_delext_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_regop_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_regop_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_ckp_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_ckp_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_child_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_xa_regop_42_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_prepare_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __txn_recycle_verify __P((ENV *, DBT *, DB_LSN *, db_recops, void *));
int __create_log_vrfy_info __P((const DB_LOG_VERIFY_CONFIG *, DB_LOG_VRFY_INFO **, DB_THREAD_INFO *));
int __destroy_log_vrfy_info __P((DB_LOG_VRFY_INFO *));
int __put_txn_vrfy_info __P((const DB_LOG_VRFY_INFO *, const VRFY_TXN_INFO *));
int __get_txn_vrfy_info __P((const DB_LOG_VRFY_INFO *, u_int32_t, VRFY_TXN_INFO **));
int __add_recycle_lsn_range __P((DB_LOG_VRFY_INFO *, const DB_LSN *, u_int32_t, u_int32_t));
int __iterate_txninfo __P((DB_LOG_VRFY_INFO *, u_int32_t, u_int32_t, TXNINFO_HANDLER, void *));
int __rem_last_recycle_lsn __P((VRFY_TXN_INFO *));
int __add_file_updated __P((VRFY_TXN_INFO *, const DBT *, int32_t));
int __del_file_updated __P((VRFY_TXN_INFO *, const DBT *));
int __clear_fileups __P((VRFY_TXN_INFO *));
int __free_txninfo_stack __P((VRFY_TXN_INFO *));
int __free_txninfo __P((VRFY_TXN_INFO *));
int __put_filereg_info __P((const DB_LOG_VRFY_INFO *, const VRFY_FILEREG_INFO *));
int __del_filelife __P((const DB_LOG_VRFY_INFO *, int32_t));
int __put_filelife __P((const DB_LOG_VRFY_INFO *, VRFY_FILELIFE *));
int __get_filelife __P((const DB_LOG_VRFY_INFO *, int32_t, VRFY_FILELIFE **));
int __get_filereg_by_dbregid __P((const DB_LOG_VRFY_INFO *, int32_t, VRFY_FILEREG_INFO **));
int __add_dbregid __P((DB_LOG_VRFY_INFO *, VRFY_FILEREG_INFO *, int32_t, u_int32_t, DB_LSN, DBTYPE, db_pgno_t, int *));
int __get_filereg_info __P((const DB_LOG_VRFY_INFO *, const DBT *, VRFY_FILEREG_INFO **));
int __free_filereg_info __P((VRFY_FILEREG_INFO *));
int __get_ckp_info __P((const DB_LOG_VRFY_INFO *, DB_LSN, VRFY_CKP_INFO **));
int __get_last_ckp_info __P((const DB_LOG_VRFY_INFO *, VRFY_CKP_INFO **));
int __put_ckp_info __P((const DB_LOG_VRFY_INFO *, const VRFY_CKP_INFO *));
int __get_timestamp_info __P((const DB_LOG_VRFY_INFO *, DB_LSN, VRFY_TIMESTAMP_INFO **));
int __get_latest_timestamp_info __P((const DB_LOG_VRFY_INFO *, DB_LSN, VRFY_TIMESTAMP_INFO **));
int __put_timestamp_info __P((const DB_LOG_VRFY_INFO *, const VRFY_TIMESTAMP_INFO *));
int __find_lsnrg_by_timerg __P((DB_LOG_VRFY_INFO *, time_t, time_t, DB_LSN *, DB_LSN *));
int __add_txnrange __P((DB_LOG_VRFY_INFO *, u_int32_t, DB_LSN, int32_t, int));
int __get_aborttxn __P((DB_LOG_VRFY_INFO *, DB_LSN));
int __txn_started __P((DB_LOG_VRFY_INFO *, DB_LSN, u_int32_t, int *));
int __set_logvrfy_dbfuid __P((DB_LOG_VRFY_INFO *));
int __add_page_to_txn __P((DB_LOG_VRFY_INFO *, int32_t, db_pgno_t, u_int32_t, u_int32_t *, int *));
int __del_txn_pages __P((DB_LOG_VRFY_INFO *, u_int32_t));
int __is_ancestor_txn __P((DB_LOG_VRFY_INFO *, u_int32_t, u_int32_t, DB_LSN, int *));
int __return_txn_pages __P((DB_LOG_VRFY_INFO *, u_int32_t, u_int32_t));

#if defined(__cplusplus)
}
#endif
#endif /* !_log_ext_h_ */
