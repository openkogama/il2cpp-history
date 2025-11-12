
/* Task`1[UGUI.Portal.Scripts.WebResponse] FromHttpResponseMessage(HttpResponseMessage) */

Task_1_UGUI_Portal_Scripts_WebResponse_ *
Assembly-CSharp.dll::UGUI::Portal::Scripts::WebResponse::WebResponse_FromHttpResponseMessage
          (HttpResponseMessage *httpResponseMessage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__Create__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__Start<UGUI::Portal::Scripts::WebResponse::_FromHttpResponseMessage_d__12>_UGUI__Portal__Scripts__WebResponse___FromHttpResponseMessage_d__12__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__get_Task__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  WStack_1.__1__state = 0;
  WStack_1._4_4_ = 0;
  WStack_1.httpResponseMessage = (HttpResponseMessage *)0x0;
  WStack_1._webResponse_5__2 = (WebResponse *)0x0;
  WStack_1.__u__1.m_task = (Task_1_System_String_ *)0x0;
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  WStack_1.__t__builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
  WStack_1.__t__builder.m_coreState.m_defaultContextAction = (Action *)0x0;
  WStack_1.__t__builder.m_task = (Task_1_UGUI_Portal_Scripts_WebResponse_ *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&WStack_1.__t__builder >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&WStack_1.httpResponseMessage >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  WStack_1.__1__state = -1;
  WStack_1.httpResponseMessage = httpResponseMessage;
  mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder`1[System::Object]::
  AsyncTaskMethodBuilder_1_System_Object__Start_8
            ((AsyncTaskMethodBuilder_1_System_Object_ *)&WStack_1.__t__builder,&WStack_1,
             void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__Start<UGUI::Portal::Scripts::WebResponse::_FromHttpResponseMessage_d__12>_UGUI__Portal__Scripts__WebResponse___FromHttpResponseMessage_d__12__
            );
  pTVar7 = (Task_1_UGUI_Portal_Scripts_WebResponse_ *)
           mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder`1[System::Object]
           ::AsyncTaskMethodBuilder_1_System_Object__get_Task
                     ((AsyncTaskMethodBuilder_1_System_Object_ *)&WStack_1.__t__builder,
                      MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__get_Task__
                     );
  return pTVar7;
}

