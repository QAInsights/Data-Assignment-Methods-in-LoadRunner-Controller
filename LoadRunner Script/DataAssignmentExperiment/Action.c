Action()
{
	char actualState[20];
	sprintf(actualState,lr_eval_string("{P_State}"));
	
	lr_start_transaction(actualState);
	
	web_url("web_url",
		"URL=http://localhost:8080/login?from=%2F",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);
	
	lr_output_message(lr_eval_string("{P_State}"));

	lr_end_transaction(actualState,LR_PASS);
	
	
	return 0;
}
