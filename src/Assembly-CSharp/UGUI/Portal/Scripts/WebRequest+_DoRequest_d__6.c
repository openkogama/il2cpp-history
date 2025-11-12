
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::UGUI::Portal::Scripts::WebRequest+<DoRequest>d__6::
     WebRequest_DoRequest_d_6_MoveNext(WebRequest_DoRequest_d_6 *this,MethodInfo *method)

{
  apWStackX_8[0] = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest__Result);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__WebResponse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___HTTP_Error__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___Unknown_Result_state___1_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Authorization);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Bearer_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___Error__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_18 = 0;
  appWStack_1[0] = apWStackX_8;
  iVar2 = (apWStackX_8[0]->fields).__1__state;
  pWVar3 = (apWStackX_8[0]->fields).__4__this;
  if (iVar2 == 0) {
    (apWStackX_8[0]->fields).__1__state = -1;
    if (pWVar3 != (WebRequest *)0x0) {
      pUVar4 = (UnityWebRequest *)(*(pWVar3->klass->vtable).__unknown.methodPtr)(pWVar3);
      (apWStackX_8[0]->fields)._webRequest_5__2 = pUVar4;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(apWStackX_8[0]->fields)._webRequest_5__2 >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      (apWStackX_8[0]->fields).__1__state = -3;
      if ((pWVar3->fields).authToken == (String *)0x0) {
code_?:
        pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
        if (pUVar4 != (UnityWebRequest *)0x0) {
          pUVar10 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest
                    ::UnityWebRequest_SendWebRequest(pUVar4,(MethodInfo *)0x0);
          (apWStackX_8[0]->fields).__2__current = (Object *)pUVar10;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&(apWStackX_8[0]->fields).__2__current >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          (apWStackX_8[0]->fields).__1__state = 1;
          return 1;
        }
        FUN_?();
      }
      else {
        unaff_RBX = (String__Array__Class *)(apWStackX_8[0]->fields)._webRequest_5__2;
        pSVar11 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Bearer_,(pWVar3->fields).authToken,(MethodInfo *)0x0);
        if (unaff_RBX != (String__Array__Class *)0x0) {
          UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest_SetRequestHeader
                    ((UnityWebRequest *)unaff_RBX,StringLiteral_Authorization,pSVar11,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
      FUN_?();
    }
    FUN_?();
code_?:
    message = (String__Array__Class *)func_?(&UNK_?);
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    obj = message;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (apWStackX_8[0]->fields).__1__state = -3;
    unaff_RBX = (String__Array__Class *)FUN_?(TypeInfo__UGUI__Portal__Scripts__WebResponse);
    obj = (String__Array__Class *)(apWStackX_8[0]->fields)._webRequest_5__2;
    if (obj == (String__Array__Class *)0x0) goto code_?;
    message = (String__Array__Class *)(obj->_0).name;
    if (message != (String__Array__Class *)0x0) {
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar12;
      iVar2 = (*pcRam_?)();
      if (iVar2 != 0) {
        if (iVar2 != 1) {
          if (iVar2 != 2) {
            if (iVar2 != 3) {
              if (iVar2 == 4) goto code_?;
              if (pWVar3 != (WebRequest *)0x0) {
                pSVar11 = (pWVar3->fields).url;
                pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
                message = (String__Array__Class *)0x0;
                if (pUVar4 != (UnityWebRequest *)0x0) {
                  aUStackX_20[0] =
                       UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                       UnityWebRequest::UnityWebRequest_get_result(pUVar4,(MethodInfo *)0x0);
                  pMVar13 = (MethodInfo *)
                            FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest__Result
                                          ,aUStackX_20);
                  message = (String__Array__Class *)
                            mscorlib.dll::System::String::String_Format_1
                                      (StringLiteral__0___Unknown_Result_state___1_,
                                       (Object *)pSVar11,(Object *)pMVar13,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)message,(MethodInfo *)0x0);
                  if (unaff_RBX != (String__Array__Class *)0x0) {
                    *(undefined1 *)&(unaff_RBX->_0).name = 0;
                    pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
                    message = (String__Array__Class *)0x0;
                    if (pUVar4 != (UnityWebRequest *)0x0) goto code_?;
                    goto code_?;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
            message = (String__Array__Class *)0x0;
            if (pUVar4 != (UnityWebRequest *)0x0) {
              message = (String__Array__Class *)(pUVar4->fields).m_DownloadHandler;
              if (message != (String__Array__Class *)0x0) {
                pLVar14 = (List_1_System_Object_ *)(*(code *)(message->_0).image[6].nameNoExt)();
                if (unaff_RBX != (String__Array__Class *)0x0) {
                  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  UQueryState`1[T]+ListQueryMatcher`1[System::Object,System::Object]::
                  UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object__set_matches
                            ((UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object_ *)
                             unaff_RBX,pLVar14,in_R8);
                  message = TypeInfo__System__String;
                  values = (String__Array *)FUN_?();
                  if (pWVar3 != (WebRequest *)0x0) {
                    if (values != (String__Array *)0x0) {
                      FUN_?(values,0,(pWVar3->fields).url);
                      FUN_?(values,1,StringLiteral___HTTP_Error__);
                      pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
                      message = (String__Array__Class *)0x0;
                      if (pUVar4 != (UnityWebRequest *)0x0) {
                        pSVar11 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                                  UnityWebRequest::UnityWebRequest_get_error
                                            (pUVar4,(MethodInfo *)0x0);
                        FUN_?(values,2,pSVar11);
                        FUN_?(values,3,::StringLiteral____);
                        pMVar13 = (MethodInfo *)(unaff_RBX->_0).namespaze;
                        FUN_?(values);
                        pSVar11 = mscorlib.dll::System::String::String_Concat_7
                                            (values,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                  ((Object *)pSVar11,(MethodInfo *)0x0);
                        *(undefined1 *)&(unaff_RBX->_0).name = 0;
                        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
                        ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_easingCurve
                                  ((ValueAnimation_1_StyleValues_ *)unaff_RBX,
                                   (Func_2_Single_Single_ *)(unaff_RBX->_0).namespaze,pMVar13);
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
              goto code_?;
            }
            goto code_?;
          }
code_?:
          if (pWVar3 != (WebRequest *)0x0) {
            pSVar11 = (pWVar3->fields).url;
            pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
            message = (String__Array__Class *)0x0;
            if (pUVar4 != (UnityWebRequest *)0x0) {
              pMVar13 = (MethodInfo *)
                        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                        UnityWebRequest::UnityWebRequest_get_error(pUVar4,(MethodInfo *)0x0);
              message = (String__Array__Class *)
                        mscorlib.dll::System::String::String_Concat_5
                                  (pSVar11,StringLiteral___Error__,(String *)pMVar13,
                                   (MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)message,(MethodInfo *)0x0);
              if (unaff_RBX != (String__Array__Class *)0x0) {
                *(undefined1 *)&(unaff_RBX->_0).name = 0;
                pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
                message = (String__Array__Class *)0x0;
                if (pUVar4 != (UnityWebRequest *)0x0) {
code_?:
                  value = (Func_2_Single_Single_ *)
                          UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::
                          UnityWebRequest::UnityWebRequest_get_error(pUVar4,(MethodInfo *)0x0);
                  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
                  ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_easingCurve
                            ((ValueAnimation_1_StyleValues_ *)unaff_RBX,value,pMVar13);
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
        pUVar4 = (apWStackX_8[0]->fields)._webRequest_5__2;
        message = (String__Array__Class *)0x0;
        if (pUVar4 != (UnityWebRequest *)0x0) {
          message = (String__Array__Class *)(pUVar4->fields).m_DownloadHandler;
          if (message != (String__Array__Class *)0x0) {
            pLVar14 = (List_1_System_Object_ *)(*(code *)(message->_0).image[6].nameNoExt)();
            if (unaff_RBX != (String__Array__Class *)0x0) {
              message = unaff_RBX;
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UQueryState`1[T]+ListQueryMatcher`1[System::Object,System::Object]::
              UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object__set_matches
                        ((UQueryState_1_T_ListQueryMatcher_1_System_Object_System_Object_ *)
                         unaff_RBX,pLVar14,in_R8);
              *(undefined1 *)&(unaff_RBX->_0).name = 1;
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
code_?:
      if (pWVar3 != (WebRequest *)0x0) {
code_?:
        pAVar15 = (pWVar3->fields).callback;
        message = (String__Array__Class *)0x0;
        if (pAVar15 != (Action_1_UGUI_Portal_Scripts_WebResponse_ *)0x0) {
          (*(pAVar15->fields)._._.invoke_impl)
                    ((pAVar15->fields)._._.method_code,unaff_RBX,(pAVar15->fields)._._.method);
          pWVar16 = apWStackX_8[0];
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__IDisposable);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pWVar16->fields).__1__state = -1;
          if ((pWVar16->fields)._webRequest_5__2 != (UnityWebRequest *)0x0) {
            FUN_?(0,TypeInfo__System__IDisposable,(pWVar16->fields)._webRequest_5__2);
          }
          (apWStackX_8[0]->fields)._webRequest_5__2 = (UnityWebRequest *)0x0;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&(apWStackX_8[0]->fields)._webRequest_5__2 >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          return 0;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
  FUN_?();
  func_?(appWStack_1);
  FUN_?(unaff_RBX);
  pcVar12 = (code *)swi(3);
  bVar17 = (*pcVar12)();
  return bVar17;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::WebRequest+<DoRequest>d__6::
     WebRequest_DoRequest_d_6_System_Collections_IEnumerator_Reset
               (WebRequest_DoRequest_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__UGUI__Portal__Scripts__WebRequest___DoRequest_d__6__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void System.IDisposable.Dispose() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::WebRequest+<DoRequest>d__6::
     WebRequest_DoRequest_d_6_System_IDisposable_Dispose
               (WebRequest_DoRequest_d_6 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    appWStack_2[0] = apWStackX_8;
    apWStackX_8[0] = this;
    FUN_?(appWStack_2);
  }
  return;
}


/* Void <>m__Finally1() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::WebRequest+<DoRequest>d__6::
     WebRequest_DoRequest_d_6___m__Finally1(WebRequest_DoRequest_d_6 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).__1__state = -1;
  if ((this->fields)._webRequest_5__2 != (UnityWebRequest *)0x0) {
    pUVar1 = (this->fields)._webRequest_5__2;
    uVar2 = 0;
    pUVar3 = pUVar1->klass;
    uVar4._0_1_ = (pUVar3->_1).rank;
    uVar4._1_1_ = (pUVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pUVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__System__IDisposable) {
          pVVar5 = &(pUVar3->vtable).Equals + pUVar3->interfaceOffsets[uVar2].offset;
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(pUVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar6 = (undefined8 *)FUN_?(pUVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(pUVar1,puVar6[1],(code *)*puVar6);
    return;
  }
  return;
}

