
/* Void MoveNext() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::WebResponse+<FromHttpResponseMessage>d__12::
     WebResponse_FromHttpResponseMessage_d_12_MoveNext
               (WebResponse_FromHttpResponseMessage_d_12 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__AwaitUnsafeOnCompleted<System::Runtime::CompilerServices::TaskAwaiter<System::String>,_UGUI::Portal::Scripts::WebResponse::_FromHttpResponseMessage_d__12>_System__Runtime__CompilerServices__TaskAwaiter<System::String>___UGUI__Portal__Scripts__WebResponse___FromHttpResponseMessage_d__12__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__SetResult_UGUI__Portal__Scripts__WebResponse_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__TaskAwaiter<System::String>__GetResult__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__TaskAwaiter<System::String>__get_IsCompleted__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Threading__Tasks__Task<System::String>__GetAwaiter__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__WebResponse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_response_available);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this->__1__state == 0) {
    task = (this->__u__1).m_task;
    (this->__u__1).m_task = (Task_1_System_String_ *)0x0;
    this->__1__state = -1;
code_?:
    pMVar1 = MethodInfo__System__Runtime__CompilerServices__TaskAwaiter<System::String>__GetResult__
    ;
    if (task != (Task_1_System_String_ *)0x0) {
      LOCK();
      UNLOCK();
      if (((task->fields)._.m_stateFlags & 0x11000000U) != 0x1000000) {
        mscorlib.dll::System::Runtime::CompilerServices::TaskAwaiter::
        TaskAwaiter_HandleNonSuccessAndDebuggerNotification((Task *)task,(MethodInfo *)0x0);
      }
      if ((pMVar1->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      value = (Func_2_Single_Single_ *)(task->fields).m_result;
      this_00 = (ValueAnimation_1_StyleValues_ *)this->_webResponse_5__2;
      if (this_00 != (ValueAnimation_1_StyleValues_ *)0x0) {
        if ((char)(this_00->fields).m_StartTimeMs == '\0') {
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
          ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_easingCurve
                    (this_00,value,in_R8);
        }
        else {
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UQueryState`1[T]+ListQueryMatcher`1[System::Object,System::Object]::
          UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object__set_matches
                    ((UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object_ *)this_00,
                     (List_1_System_Object_ *)value,in_R8);
        }
code_?:
        pWVar2 = this->_webResponse_5__2;
        this->__1__state = -2;
        this->_webResponse_5__2 = (WebResponse *)0x0;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&this->_webResponse_5__2 >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        if (*(int *)&(
                     TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>
                     ->_1).field_0x1c == 0) {
          FUN_?();
        }
        mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder`1[System::Object]::
        AsyncTaskMethodBuilder_1_System_Object__SetResult
                  ((AsyncTaskMethodBuilder_1_System_Object_ *)&this->__t__builder,(Object *)pWVar2,
                   MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__SetResult_UGUI__Portal__Scripts__WebResponse_
                  );
        return;
      }
code_?:
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pWVar2 = (WebResponse *)FUN_?(TypeInfo__UGUI__Portal__Scripts__WebResponse);
    this->_webResponse_5__2 = pWVar2;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&this->_webResponse_5__2 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      in_R8 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar7);
    }
    pWVar2 = this->_webResponse_5__2;
    if (this->httpResponseMessage == (HttpResponseMessage *)0x0) {
      if (pWVar2 != (WebResponse *)0x0) {
        (pWVar2->fields)._IsOk_k__BackingField = 0;
        if ((ValueAnimation_1_StyleValues_ *)this->_webResponse_5__2 !=
            (ValueAnimation_1_StyleValues_ *)0x0) {
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
          ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_easingCurve
                    ((ValueAnimation_1_StyleValues_ *)this->_webResponse_5__2,
                     (Func_2_Single_Single_ *)StringLiteral_No_response_available,in_R8);
          goto code_?;
        }
        FUN_?();
      }
      FUN_?();
      goto code_?;
    }
    pHVar8 = this->httpResponseMessage;
    if (pHVar8 == (HttpResponseMessage *)0x0) goto code_?;
    if ((pHVar8->fields).statusCode < 200) {
      bVar7 = false;
    }
    else {
      bVar7 = (uint)(pHVar8->fields).statusCode < 300;
    }
    if (pWVar2 != (WebResponse *)0x0) {
      (pWVar2->fields)._IsOk_k__BackingField = bVar7;
      if (this->httpResponseMessage != (HttpResponseMessage *)0x0) {
        pHVar9 = (this->httpResponseMessage->fields)._Content_k__BackingField;
        if (pHVar9 != (HttpContent *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>__Create__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>__Start<System::Net::Http::HttpContent::_ReadAsStringAsync_d__20>_System__Net__Http__HttpContent___ReadAsStringAsync_d__20__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>__get_Task__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          HStack_10.__1__state = 0;
          HStack_10._4_4_ = 0;
          HStack_10.__t__builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
          HStack_10.__t__builder.m_coreState.m_defaultContextAction = (Action *)0x0;
          HStack_10.__t__builder.m_task = (Task_1_System_String_ *)0x0;
          HStack_10.__u__1.m_task = (Task *)0x0;
          HStack_10.__u__1.m_continueOnCapturedContext = 0;
          HStack_10.__u__1._9_7_ = 0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&HStack_10.__4__this >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          HStack_10.__4__this = pHVar9;
          if (*(int *)&(
                       TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>
                       ->_1).field_0x1c == 0) {
            FUN_?();
          }
          HStack_10.__t__builder.m_coreState.m_stateMachine = (IAsyncStateMachine *)0x0;
          HStack_10.__t__builder.m_coreState.m_defaultContextAction = (Action *)0x0;
          HStack_10.__t__builder.m_task = (Task_1_System_String_ *)0x0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&HStack_10.__t__builder >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          HStack_10.__1__state = -1;
          in_R8 = 
          void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>__Start<System::Net::Http::HttpContent::_ReadAsStringAsync_d__20>_System__Net__Http__HttpContent___ReadAsStringAsync_d__20__
          ;
          mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder`1[System::Object]
          ::AsyncTaskMethodBuilder_1_System_Object__Start_3
                    ((AsyncTaskMethodBuilder_1_System_Object_ *)&HStack_10.__t__builder,&HStack_10,
                     void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>__Start<System::Net::Http::HttpContent::_ReadAsStringAsync_d__20>_System__Net__Http__HttpContent___ReadAsStringAsync_d__20__
                    );
          task = (Task_1_System_String_ *)
                 mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder`1[System::
                 Object]::AsyncTaskMethodBuilder_1_System_Object__get_Task
                           ((AsyncTaskMethodBuilder_1_System_Object_ *)&HStack_10.__t__builder,
                            MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<System::String>__get_Task__
                           );
          if (task != (Task_1_System_String_ *)0x0) {
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)&TStackX_18 >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              in_R8 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar7 = uVar5 == *puVar6;
                if (bVar7) {
                  *puVar6 = uVar5 | 1L << (longlong)in_R8;
                }
                UNLOCK();
              } while (!bVar7);
            }
            TStackX_18.m_task = task;
            TStackX_20.m_task = (Task_1_System_Object_ *)task;
            if (task != (Task_1_System_String_ *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Threading__Tasks__Task);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uVar3 = ((TStackX_18.m_task)->fields)._.m_stateFlags;
              LOCK();
              UNLOCK();
              if (*(int *)&(TypeInfo__System__Threading__Tasks__Task->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((uVar3 & 0x1600000) == 0) {
                this->__1__state = 0;
                (this->__u__1).m_task = TStackX_18.m_task;
                func_?(&this->__u__1);
                if (*(int *)&(
                             TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>
                             ->_1).field_0x1c == 0) {
                  FUN_?();
                }
                mscorlib.dll::System::Runtime::CompilerServices::AsyncTaskMethodBuilder`1[System::
                Object]::AsyncTaskMethodBuilder_1_System_Object__AwaitUnsafeOnCompleted_9
                          ((AsyncTaskMethodBuilder_1_System_Object_ *)&this->__t__builder,
                           &TStackX_20,this,
                           void_MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__AwaitUnsafeOnCompleted<System::Runtime::CompilerServices::TaskAwaiter<System::String>,_UGUI::Portal::Scripts::WebResponse::_FromHttpResponseMessage_d__12>_System__Runtime__CompilerServices__TaskAwaiter<System::String>___UGUI__Portal__Scripts__WebResponse___FromHttpResponseMessage_d__12__
                          );
                return;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetStateMachine(IAsyncStateMachine) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::WebResponse+<FromHttpResponseMessage>d__12::
     WebResponse_FromHttpResponseMessage_d_12_SetStateMachine
               (WebResponse_FromHttpResponseMessage_d_12 *this,IAsyncStateMachine *stateMachine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>__SetStateMachine_System__Runtime__CompilerServices__IAsyncStateMachine_
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
  if (*(int *)&(
               TypeInfo__System__Runtime__CompilerServices__AsyncTaskMethodBuilder<UGUI::Portal::Scripts::WebResponse>
               ->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar1 = &this->__t__builder;
  if (stateMachine == (IAsyncStateMachine *)0x0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_stateMachine);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__System__Runtime__CompilerServices__AsyncMethodBuilderCore__SetStateMachine_System__Runtime__CompilerServices__IAsyncStateMachine_
                               );
    FUN_?(this_00,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pAVar1->m_coreState).m_stateMachine != (IAsyncStateMachine *)0x0) {
    ptr = (Void *)func_?(&StringLiteral_The_builder_was_not_properly_ini);
    pSVar3 = (String *)
             UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_2(ptr,(MethodInfo *)0x0);
    uVar2 = func_?(&TypeInfo__System__InvalidOperationException);
    this_01 = (ProtocolViolationException *)func_?(uVar2);
    System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
              (this_01,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__System__Runtime__CompilerServices__AsyncMethodBuilderCore__SetStateMachine_System__Runtime__CompilerServices__IAsyncStateMachine_
                               );
    FUN_?(this_01,uVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = iRam_? != 0;
  (pAVar1->m_coreState).m_stateMachine = stateMachine;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)pAVar1 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}

