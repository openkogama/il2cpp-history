
/* Void CreatePlanetScreenshot() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_CreatePlanetScreenshot
               (BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar2 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar2->fields).gameMode != 4) {
          return;
        }
      }
      object = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (object != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<System::Byte_[]>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                       );
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_No_screen_shot_when_no_photo_edi);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_Texture_is_already_being_generat);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
             (pMVar3 = (pMVar1->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
            (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
           ((this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_00,(MethodInfo *)0x0), this_01 != (MVLocalPlayer *)0x0 &&
            (pLVar4 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_01,(MethodInfo *)0x0)
            , pLVar4 != (List_1_MV_Common_PlanetPermissionType_ *)0x0)))) {
          if (((pLVar4->fields)._size == 0) ||
             (iVar5 = FUN_?(pLVar4,CONCAT71((int7)((ulonglong)
                                                                                                                        
                                                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                                                  ->klass >> 8),0xe),
                                    MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                                    ->klass->rgctx_data[0x17].rgctxDataDummy), iVar5 == -1)) {
            pSVar6 = StringLiteral_No_screen_shot_when_no_photo_edi;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
              pSVar6 = StringLiteral_No_screen_shot_when_no_photo_edi;
            }
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GenerateTextureData);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField
                == 0) {
              this_02 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__System__Action<System::Byte_[]>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_02,(Object *)object,
                         MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                         ,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__GameObject);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_GenerateTexture);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar7 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
              pSVar6 = StringLiteral_GenerateTexture;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_Internal_CreateGameObject(pGVar7,pSVar6,(MethodInfo *)0x0);
              if ((pGVar7 != (GameObject *)0x0) &&
                 (this_03 = (Component *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (pGVar7,
                                       GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                                      ), this_03 != (Component *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Debug);
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__UnityEngine__Object);
                  LOCK();
                  UNLOCK();
                  FUN_?(&StringLiteral_Texture_is_being_generated);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__GenerateTextureData);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (TypeInfo__GenerateTextureData->static_fields->
                    _IsCreatingScreenShot_k__BackingField != 0) {
                  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(this_03,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                            ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar6 = StringLiteral_Texture_is_being_generated;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Debug,0);
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__ILogger);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Debug);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
                  if (pIVar8 != (ILogger_1 *)0x0) {
                    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,0,pSVar6);
                    return;
                  }
                  FUN_?();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                lVar10 = FUN_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
                *(undefined4 *)(lVar10 + 0x10) = 0;
                *(Component **)(lVar10 + 0x28) = this_03;
                if (iRam_? != 0) {
                  uVar11 = (uint)(lVar10 + 0x28U >> 0xc);
                  uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                  do {
                    uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                    puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                    LOCK();
                    bVar15 = uVar13 == *puVar14;
                    if (bVar15) {
                      *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar15);
                }
                iVar5 = iRam_?;
                *(UnityAction_1_System_Object_ **)(lVar10 + 0x20) = this_02;
                if (iVar5 != 0) {
                  uVar11 = (uint)(lVar10 + 0x20U >> 0xc);
                  uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
                  do {
                    uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
                    puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
                    LOCK();
                    bVar15 = uVar13 == *puVar14;
                    if (bVar15) {
                      *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar15);
                }
                if (lVar10 == 0) {
                  uVar16 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,
                                               unaff_RSI);
                  this_04 = (NullReferenceException *)func_?(uVar16);
                  pSVar6 = (String *)func_?(&StringLiteral_routine_is_null);
                  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                            (this_04,pSVar6,(MethodInfo *)0x0);
                  uVar16 = func_?(&
                                               MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                              );
                  FUN_?(this_04,uVar16);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                bVar17 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this_03,(MethodInfo *)0x0);
                if (bVar17 == 0) {
                  uVar16 = func_?(&TypeInfo__System__ArgumentException);
                  this_05 = (InvalidEnumArgumentException *)func_?(uVar16);
                  pSVar6 = (String *)
                            func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
                  System.dll::System::ComponentModel::InvalidEnumArgumentException::
                  InvalidEnumArgumentException__ctor_1(this_05,pSVar6,(MethodInfo *)0x0);
                  uVar16 = func_?(&
                                               MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                              );
                  FUN_?(this_05,uVar16);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (this_03 == (Component *)0x0) {
                  FUN_?();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pvVar18 = (this_03->fields)._.m_CachedPtr;
                if (pvVar18 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this_03,(MethodInfo *)0x0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcVar9 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar16 = func_?(&UNK_?);
                  FUN_?(uVar16,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar18,lVar10);
                return;
              }
              goto code_?;
            }
            pSVar6 = StringLiteral_Texture_is_already_being_generat;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
              pSVar6 = StringLiteral_Texture_is_already_being_generat;
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar8 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,2,pSVar6);
            return;
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ExecuteBrowserRequest(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_ExecuteBrowserRequest
               (String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_8[0] = (uint16_t *)0x0;
  puStack_1 = (uint16_t *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  ppuStack_4 = apuStackX_8;
  if (url != (String *)0x0) {
    if ((url->fields)._stringLength == 0) {
      puStack_1 = (uint16_t *)0x1;
      uStack_2 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar5 = (url->fields)._stringLength;
      apuStackX_8[0] = &(url->fields)._firstChar;
      if (iVar5 == 0) {
        apuStackX_8[0] = (uint16_t *)0x0;
      }
      uStack_2 = CONCAT44(uStack_2._4_4_,iVar5);
      puStack_1 = apuStackX_8[0];
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&puStack_1);
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_Exit(BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_does_nothing_remove_from_we);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_This_does_nothing_remove_from_we;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,2,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ExternalCallback(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_ExternalCallback
               (BrowserComm *this,String *jsonData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BrowserComm__JsonReturnData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonReturnData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_callback_function_with_callba);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (BrowserComm_JsonReturnData *)
            Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                      (jsonData,
                       BrowserComm__JsonReturnData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonReturnData>_System__String_
                      );
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
            TypeInfo__BrowserComm->static_fields->callbacks;
  if ((this_01 != (BrowserComm_JsonReturnData *)0x0) &&
     (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(this_01->fields).callbackId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&this_01->fields,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_No_callback_function_with_callba,pSVar2,(MethodInfo *)0x0)
      ;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,2,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BrowserComm);
    }
    pDVar5 = TypeInfo__BrowserComm->static_fields->callbacks;
    if (pDVar5 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,
                          (this_01->fields).callbackId,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__get_Item_int_
                         );
      pDVar5 = TypeInfo__BrowserComm->static_fields->callbacks;
      if (pDVar5 != (Dictionary_2_System_Int32_BrowserComm_Callback_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,(this_01->fields).callbackId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Remove_int_
                  );
        bVar7 = BrowserComm+JsonReturnData::BrowserComm_JsonReturnData_Validate
                          (this_01,(MethodInfo *)0x0);
        if (pOVar6 != (Object *)0x0) {
          pOVar8 = pOVar6[1].klass;
          if (bVar7 == 0) {
            if (pOVar8 != (Object__Class *)0x0) {
              uVar9._0_2_ = (pOVar8->_0).byval_arg.attrs;
              uVar9._2_1_ = (pOVar8->_0).byval_arg.type;
              uVar9._3_5_ = *(undefined5 *)&(pOVar8->_0).byval_arg.field_0xb;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(pOVar8->_0).namespaze)
                        ((pOVar8->_0).element_class,0,(this_01->fields).error,uVar9);
              return;
            }
          }
          else if (pOVar8 != (Object__Class *)0x0) {
            uVar10._0_2_ = (pOVar8->_0).byval_arg.attrs;
            uVar10._2_1_ = (pOVar8->_0).byval_arg.type;
            uVar10._3_5_ = *(undefined5 *)&(pOVar8->_0).byval_arg.field_0xb;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pOVar8->_0).namespaze)
                      ((pOVar8->_0).element_class,1,(this_01->fields).data,uVar10);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void GiveBrowserInfo(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_GiveBrowserInfo
               (BrowserComm *this,String *browserinfo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (browserinfo != (String *)0x0) {
    auStackX_10[0] = 0x2c;
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_1._pointer._value = auStackX_10;
    RStack_1._length = 1;
    RStack_1._12_4_ = 0;
    pSVar2 = mscorlib.dll::System::String::String_SplitInternal
                       (browserinfo,&RStack_1,0x7fffffff,StringSplitOptions__Enum_None,
                        (MethodInfo *)0x0);
    if (pSVar2 != (String__Array *)0x0) {
      if ((int)pSVar2->max_length != 0) {
        pSVar3 = pSVar2->vector[0];
        if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__BrowserComm);
        }
        TypeInfo__BrowserComm->static_fields->browserName = pSVar3;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&TypeInfo__BrowserComm->static_fields->browserName >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar5;
            LOCK();
            uVar7 = *puVar5;
            if (uVar6 == uVar7) {
              *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar7);
        }
        if (1 < (uint)pSVar2->max_length) {
          iVar8 = mscorlib.dll::System::Int32::Int32_Parse(pSVar2->vector[1],(MethodInfo *)0x0);
          TypeInfo__BrowserComm->static_fields->browserVersion = iVar8;
          return;
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void PublishPlanetFromWeb() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_PublishPlanetFromWeb
               (BrowserComm *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BrowserComm____c___PublishPlanetFromWeb_b__12_0_System__String_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
code_?:
    FUN_?();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  this_01 = (pMVar2->fields).operationRequests;
  if (*(int *)&(TypeInfo__BrowserComm____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_04 = TypeInfo__BrowserComm____c->static_fields->__9__12_0;
  if (this_04 == (Action_1_String_ *)0x0) {
    if (*(int *)&(TypeInfo__BrowserComm____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__BrowserComm____c->static_fields->__9;
    this_04 = (Action_1_String_ *)FUN_?(TypeInfo__System__Action<System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              ((UnityAction_1_System_Object_ *)this_04,(Object *)object,
               MethodInfo__BrowserComm____c___PublishPlanetFromWeb_b__12_0_System__String_,
               (MethodInfo *)0x0);
    TypeInfo__BrowserComm____c->static_fields->__9__12_0 = this_04;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__BrowserComm____c->static_fields->__9__12_0 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,this_04,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_already_publishing_plane);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Texture_is_already_being_generat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Publish_planet_operation_is_pend);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_publishing_game__try_again);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_not_authorized_to_publis);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Remember_that_you_need_to_play_i);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_can_not_publish_game_before_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pMVar7 = (pMVar2->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0)) ||
     ((pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar7,(MethodInfo *)0x0),
      pMVar8 == (MVLocalPlayer *)0x0 ||
      (pLVar9 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(pMVar8,(MethodInfo *)0x0),
      pLVar9 == (List_1_MV_Common_PlanetPermissionType_ *)0x0)))) goto code_?;
  pSVar10 = StringLiteral_You_are_not_authorized_to_publis;
  if ((pLVar9->fields)._size != 0) {
    uVar11 = CONCAT71((int7)((ulonglong)
                             MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                            >> 8),0x14);
    iVar12 = FUN_?(pLVar9,uVar11,
                           MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                           ->klass->rgctx_data[0x17].rgctxDataDummy);
    pSVar10 = StringLiteral_You_are_not_authorized_to_publis;
    if (iVar12 != -1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar1 == (MVGameControllerBase *)0x0) goto code_?;
      pSVar10 = StringLiteral_Error_publishing_game__try_again;
      if (((pMVar1->fields).game != (MVNetworkGame *)0x0) &&
         (MVar13 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0),
         pSVar10 = StringLiteral_Error_publishing_game__try_again,
         MVar13 == MVJoinState__Enum_Playing)) {
        lVar14 = FUN_?();
        if (lVar14 == 0) goto code_?;
        if (*(int *)(lVar14 + 0x20) != 0) {
          lVar14 = FUN_?();
          if (lVar14 == 0) goto code_?;
          pSVar10 = StringLiteral_Error_publishing_game__try_again;
          if (*(int *)(lVar14 + 0x20) != 4) goto code_?;
        }
        pOVar15 = (this_01->fields).operationResponsePendingManager;
        if (pOVar15 == (OperationResponsePendingManager *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (HashSet_1_System_ByteEnum_ *)(pOVar15->fields).pendingOperations;
        if (this_02 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
        bVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
                HashSet_1_System_ByteEnum__Contains
                          (this_02,(ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),0xb),
                           MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                          );
        if (bVar16 == 0) {
          pMVar2 = (this_01->fields).networkGame;
          if ((((pMVar2 == (MVNetworkGame *)0x0) ||
               (pMVar7 = (pMVar2->fields).playerContainer, pMVar7 == (MVPlayerContainer *)0x0)) ||
              (pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar7,(MethodInfo *)0x0), pMVar8 == (MVLocalPlayer *)0x0)) ||
             (pMVar2 = (this_01->fields).networkGame, pMVar2 == (MVNetworkGame *)0x0))
          goto code_?;
          if ((pMVar8->fields)._.level < (pMVar2->fields)._PublishLevel_k__BackingField) {
            uStackX_20 = CONCAT44(uStackX_20._4_4_,(pMVar2->fields)._PublishLevel_k__BackingField);
            pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&uStackX_20,(MethodInfo *)0x0);
            pSVar10 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_You_can_not_publish_game_before_,pSVar10,
                                 (MethodInfo *)0x0);
          }
          else {
            if ((pMVar2->fields).isPublished != 0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PublishPlanet_1
                        (this_01,0,this_04,(MethodInfo *)0x0);
              return;
            }
            cVar17 = FUN_?();
            if (cVar17 == '\0') {
              uVar11 = 0;
              bVar16 = MVNetworkGame+OperationRequests::
                      MVNetworkGame_OperationRequests_PublishPlanet_1
                                (this_01,0,this_04,(MethodInfo *)0x0);
              if (bVar16 == 0) {
                return;
              }
              pSVar10 = TM::TM__(StringLiteral_Remember_that_you_need_to_play_i,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              uStackX_18 = unaff_RSI;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                              ,8,0);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)FUN_?(
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
              Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                        (this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              pOVar18 = (Object *)FUN_?(uRam_?,&stack0x00000008);
              if (this_03 ==
                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
                FUN_?();
                UNRECOVERED_JUMPTABLE = (code *)swi(3);
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar18,
                         (Object *)pSVar10,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                FUN_?();
              }
              uVar11 = 0;
              uStackX_20 = uStackX_18;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                              ,this_03,8,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__NotificationController);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__NotificationLifetime);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStackX_18 = CONCAT71(uStackX_18._1_7_,2);
              pOVar18 = (Object *)FUN_?(uRam_?,&uStackX_18);
              uStackX_18 = CONCAT44(uStackX_18._4_4_,8);
              value = (Object *)FUN_?(TypeInfo__NotificationLifetime,&uStackX_18);
              if (this_03 !=
                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar18,value,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__NotificationsManager);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0
                   ) {
                  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__NotificationsManager);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
                  if (this_00 == (NotificationsManager *)0x0) goto code_?;
                  NotificationsManager::NotificationsManager_InstantiateNotification
                            (this_00,NotificationType__Enum_FirstTimeXPRewarded,
                             (Dictionary_2_System_Object_System_Object_ *)this_03,(MethodInfo *)0x0)
                  ;
                }
                return;
              }
code_?:
              FUN_?();
              UNRECOVERED_JUMPTABLE = (code *)swi(3);
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Texture_is_already_being_generat,(MethodInfo *)0x0);
            pSVar10 = StringLiteral_You_are_already_publishing_plane;
          }
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Publish_planet_operation_is_pend,(MethodInfo *)0x0);
          pSVar10 = StringLiteral_You_are_already_publishing_plane;
        }
      }
    }
  }
code_?:
  pSVar10 = TM::TM__(pSVar10,(MethodInfo *)0x0);
  if (this_04 != (Action_1_String_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (this_04->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((this_04->fields)._._.method_code,pSVar10,(this_04->fields)._._.method,
               UNRECOVERED_JUMPTABLE);
    return;
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void SetMute(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_SetMute
               (BrowserComm *this,String *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  BrowserComm__JsonMuteData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonMuteData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (data,
                      BrowserComm__JsonMuteData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonMuteData>_System__String_
                     );
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = *(char *)&pOVar1[1].klass;
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  cVar4 = '\0';
  if (TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted == 0) {
    cVar4 = cVar3;
  }
  if (cVar4 == '\0') {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    if ((TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted == 0) || (cVar3 != '\0')) {
      return;
    }
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted = 0;
    bVar5 = TypeInfo__MainCameraManager->static_fields->storedMuteValue;
  }
  else {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    TypeInfo__MainCameraManager->static_fields->isTemporarilyMuted = 1;
    TypeInfo__MainCameraManager->static_fields->storedMuteValue =
         TypeInfo__MainCameraManager->static_fields->isMuted;
    bVar5 = 1;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->isMuted = bVar5;
  if (TypeInfo__MainCameraManager->static_fields->isMuted == 0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar6 = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    fVar6 = 0.0;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar6);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pAVar8 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
  if (pAVar8 != (Action_1_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MainCameraManager);
    }
    (*(pAVar8->fields)._._.invoke_impl)
              ((pAVar8->fields)._._.method_code,TypeInfo__MainCameraManager->static_fields->isMuted,
               (pAVar8->fields)._._.method);
  }
  return;
}


/* Void UserGoldUpdate(String) */

void Assembly-CSharp.dll::BrowserComm::BrowserComm_UserGoldUpdate
               (BrowserComm *this,String *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  BrowserComm__JsonGoldUpdateData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonGoldUpdateData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (data,
                      BrowserComm__JsonGoldUpdateData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<BrowserComm::JsonGoldUpdateData>_System__String_
                     );
  if ((this->fields).OnGoldPurchasedFromWeb != (Action_2_Int32_Int32_ *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar3 = (this->fields).OnGoldPurchasedFromWeb;
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,*(undefined4 *)((longlong)&pOVar1[1].klass + 4),
               *(undefined4 *)&pOVar1[1].klass,(pAVar3->fields)._._.method);
  }
  return;
}


/* BrowserComm() */

void Assembly-CSharp.dll::BrowserComm::BrowserComm__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_browser_name_not_set);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__BrowserComm->static_fields->enableExternalCall = 1;
  TypeInfo__BrowserComm->static_fields->enableBrowserRequest = 1;
  TypeInfo__BrowserComm->static_fields->browserName = StringLiteral_browser_name_not_set;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__BrowserComm->static_fields->browserName >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__BrowserComm->static_fields->browserVersion = -1;
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_BrowserComm::Callback>__Dictionary__
            );
  TypeInfo__BrowserComm->static_fields->callbacks =
       (Dictionary_2_System_Int32_BrowserComm_Callback_ *)this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__BrowserComm->static_fields->callbacks >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* String get_BrowserName() */

String * Assembly-CSharp.dll::BrowserComm::BrowserComm_get_BrowserName(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  return TypeInfo__BrowserComm->static_fields->browserName;
}


/* Int32 get_BrowserVersion() */

int32_t Assembly-CSharp.dll::BrowserComm::BrowserComm_get_BrowserVersion(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  return TypeInfo__BrowserComm->static_fields->browserVersion;
}

