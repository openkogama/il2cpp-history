
/* Void OnScreenShotUploaded(Object, ScreenshotUploadedEventArgs) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::
     UploadGameScreenshotHandler_OnScreenShotUploaded
               (UploadGameScreenshotHandler *this,Object *sender,ScreenshotUploadedEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadGameScreenshotHandler____c__DisplayClass6_0___OnScreenShotUploaded_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UploadGameScreenshotHandler____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UploadGameScreenshotHandler____c);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screenshot_Successfully_uploaded);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_upload_screenshot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__UploadGameScreenshotHandler____c__DisplayClass6_0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    this_00 = (pMVar1->fields).game;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_remove_ScreenshotUploaded
                (this_00,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_02,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UploadGameScreenshotHandler____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UploadGameScreenshotHandler____c);
      }
      pEVar3 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__UploadGameScreenshotHandler____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UploadGameScreenshotHandler____c);
        }
        pUVar4 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,(Object *)pUVar4,
                   MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_0 = pEVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)
                          &TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_0 >>
                         0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UploadGameScreenshotHandler____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UploadGameScreenshotHandler____c);
      }
      pEVar3 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__UploadGameScreenshotHandler____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UploadGameScreenshotHandler____c);
        }
        pUVar4 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,(Object *)pUVar4,
                   MethodInfo__UploadGameScreenshotHandler____c___OnScreenShotUploaded_b__6_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_1 = pEVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)
                          &TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__6_1 >>
                         0xc);
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar10 = (Object__Class *)
                TM::TM__(StringLiteral_Screenshot_Successfully_uploaded,(MethodInfo *)0x0);
      if (object != (Object *)0x0) {
        bVar9 = iRam_? != 0;
        object[1].klass = pOVar10;
        if (bVar9) {
          uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
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
        if (args != (ScreenshotUploadedEventArgs *)0x0) {
          if ((args->fields).Uploaded == 0) {
            pOVar10 = (Object__Class *)
                      TM::TM__(StringLiteral_Failed_to_upload_screenshot,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            object[1].klass = pOVar10;
            if (bVar9) {
              uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
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
          }
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_03,object,
                     MethodInfo__UploadGameScreenshotHandler____c__DisplayClass6_0___OnScreenShotUploaded_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar11 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar11);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar2,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar6 = (longlong)(pLVar12->fields)._size;
            uVar5 = 0;
            if (0 < lVar6) {
              lVar13 = 0;
              lVar14 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar12->fields)._size <= uVar5) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pTVar16 = (pLVar12->fields)._items;
                if (pTVar16 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar16->max_length <= uVar5) {
                  FUN_?();
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                this_01 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
                if (this_01 == (Component *)0x0) goto code_?;
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0);
                bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_Execute_18
                                  (pGVar2,(BaseEventData *)0x0,this_03,
                                   (pMVar11->field7_0x38).rgctx_data[1].method);
                if (bVar17 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                uVar5 = uVar5 + 1;
                lVar13 = lVar13 + 1;
                lVar14 = lVar14 + 8;
              } while (lVar13 < lVar6);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnScreenshotReady(Byte[]) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::UploadGameScreenshotHandler_OnScreenshotReady
               (UploadGameScreenshotHandler *this,Byte__Array *imageData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).screenShotSound;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (this_00,(MethodInfo *)0x0);
    this_01 = (Texture2D *)FUN_?();
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MStack_1._useMipmapLimit_k__BackingField = 0;
    MStack_1._1_7_ = 0;
    MStack_1._groupName_k__BackingField = (String *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
              (this_01,600,0xf0,TextureFormat__Enum_ARGB32,1,0,(void *)0x0,0,&MStack_1,
               (MethodInfo *)0x0);
    UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::ImageConversion_LoadImage_1
              (this_01,imageData,(MethodInfo *)0x0);
    pRVar2 = (this->fields).toImage;
    if (pRVar2 != (RawImage *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,this_01,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar3 = (Texture2D *)(pRVar2->fields).m_Texture;
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_01 != (Texture2D *)0x0 || pTVar3 != (Texture2D *)0x0) {
        if (this_01 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar3 == (Texture2D *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar5 = (pTVar3->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar3 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = (this_01->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar5 = pTVar3 == this_01;
        }
        if (!bVar5) {
          bVar5 = iRam_? != 0;
          (pRVar2->fields).m_Texture = (Texture *)this_01;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(pRVar2->fields).m_Texture >> 0xc);
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
          (*(pRVar2->klass->vtable).SetVerticesDirty.methodPtr)
                    (pRVar2,(pRVar2->klass->vtable).SetVerticesDirty.method);
          (*(pRVar2->klass->vtable).SetMaterialDirty.methodPtr)
                    (pRVar2,(pRVar2->klass->vtable).SetMaterialDirty.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TakeScreenshot() */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::UploadGameScreenshotHandler_TakeScreenshot
               (UploadGameScreenshotHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Byte_[]>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UploadGameScreenshotHandler__OnScreenshotReady_System__Byte____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GenerateTexture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  pSVar2 = StringLiteral_GenerateTexture;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,pSVar2,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    this_00 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar1,
                         GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                        );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Byte_[]>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__UploadGameScreenshotHandler__OnScreenshotReady_System__Byte____,
               (MethodInfo *)0x0);
    if (this_00 != (Component *)0x0) {
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
      if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField != 0)
      {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
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
                  ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar2 = StringLiteral_Texture_is_being_generated;
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
        if (pIVar3 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar5 = FUN_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
      *(undefined4 *)(lVar5 + 0x10) = 0;
      *(Component **)(lVar5 + 0x28) = this_00;
      if (iRam_? != 0) {
        uVar6 = (uint)(lVar5 + 0x28U >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      iVar11 = iRam_?;
      *(UnityAction_1_System_Object_ **)(lVar5 + 0x20) = this_01;
      if (iVar11 != 0) {
        uVar6 = (uint)(lVar5 + 0x20U >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      if (lVar5 == 0) {
        uVar12 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,unaff_RSI);
        this_02 = (NullReferenceException *)func_?(uVar12);
        pSVar2 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_02,pSVar2,(MethodInfo *)0x0);
        uVar12 = func_?(&
                                     MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                    );
        FUN_?(this_02,uVar12);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this_00,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        uVar12 = func_?(&TypeInfo__System__ArgumentException);
        this_03 = (InvalidEnumArgumentException *)func_?(uVar12);
        pSVar2 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_03,pSVar2,(MethodInfo *)0x0);
        uVar12 = func_?(&
                                     MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                    );
        FUN_?(this_03,uVar12);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
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
      if (this_00 == (Component *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar14 = (this_00->fields)._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar14,lVar5);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UploadScreenshot() */

void Assembly-CSharp.dll::UploadGameScreenshotHandler::UploadGameScreenshotHandler_UploadScreenshot
               (UploadGameScreenshotHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadGameScreenshotHandler____c___UploadScreenshot_b__5_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UploadGameScreenshotHandler____c);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UploadGameScreenshotHandler____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UploadGameScreenshotHandler____c);
  }
  this_01 = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__5_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__UploadGameScreenshotHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UploadGameScreenshotHandler____c);
    }
    object = TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__UploadGameScreenshotHandler____c___UploadScreenshot_b__5_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__5_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                      &TypeInfo__UploadGameScreenshotHandler____c->static_fields->__9__5_0 >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar6 != (MVGameControllerBase *)0x0) {
    pMVar7 = (pMVar6->fields).game;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<ScreenshotUploadedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__UploadGameScreenshotHandler__OnScreenShotUploaded_System__Object__ScreenshotUploadedEventArgs_
               ,(MethodInfo *)0x0);
    if (pMVar7 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ScreenshotUploaded
                (pMVar7,(EventHandler_1_ScreenshotUploadedEventArgs_ *)this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (object_00 = (pMVar7->fields).operationRequests,
         object_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Action<System::Byte_[]>);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__MVNetworkGame__OperationRequests__HandleUploadScreenShotData_System__Byte____
                       );
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_No_screen_shot_when_not_planet_o);
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
        pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar6 != (MVGameControllerBase *)0x0) &&
            (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
           ((this_00 = (pMVar7->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
            (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_00,(MethodInfo *)0x0), this_03 != (MVLocalPlayer *)0x0)))) {
          PVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_03,(MethodInfo *)0x0);
          if ((char)PVar8 == '\x02') {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GenerateTextureData);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField
                == 0) {
              this_04 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__System__Action<System::Byte_[]>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_04,(Object *)object_00,
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
              pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
              pSVar9 = StringLiteral_GenerateTexture;
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
              GameObject_Internal_CreateGameObject(pGVar1,pSVar9,(MethodInfo *)0x0);
              if ((pGVar1 != (GameObject *)0x0) &&
                 (this_05 = (Component *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_AddComponent_1
                                      (pGVar1,
                                       GenerateTextureData_MethodInfo__UnityEngine__GameObject__AddComponent<GenerateTextureData>__
                                      ), this_05 != (Component *)0x0)) {
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
                  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject(this_05,(MethodInfo *)0x0);
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
                            ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pSVar9 = StringLiteral_Texture_is_being_generated;
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
                  pIVar10 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
                  if (pIVar10 == (ILogger_1 *)0x0) {
                    FUN_?();
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar10,0,pSVar9);
                  return;
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                lVar12 = FUN_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
                *(undefined4 *)(lVar12 + 0x10) = 0;
                *(Component **)(lVar12 + 0x28) = this_05;
                if (iRam_? != 0) {
                  uVar2 = (uint)(lVar12 + 0x28U >> 0xc);
                  uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar13 = uVar4 == *puVar3;
                    if (bVar13) {
                      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                iVar14 = iRam_?;
                *(UnityAction_1_System_Object_ **)(lVar12 + 0x20) = this_04;
                if (iVar14 != 0) {
                  uVar2 = (uint)(lVar12 + 0x20U >> 0xc);
                  uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                  do {
                    uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar13 = uVar4 == *puVar3;
                    if (bVar13) {
                      *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                if (lVar12 == 0) {
                  uVar15 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,
                                               unaff_RSI);
                  this_06 = (NullReferenceException *)func_?(uVar15);
                  pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
                  mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                            (this_06,pSVar9,(MethodInfo *)0x0);
                  uVar15 = func_?(&
                                               MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                              );
                  FUN_?(this_06,uVar15);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                bVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this_05,(MethodInfo *)0x0);
                if (bVar16 == 0) {
                  uVar15 = func_?(&TypeInfo__System__ArgumentException);
                  this_07 = (InvalidEnumArgumentException *)func_?(uVar15);
                  pSVar9 = (String *)
                            func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
                  System.dll::System::ComponentModel::InvalidEnumArgumentException::
                  InvalidEnumArgumentException__ctor_1(this_07,pSVar9,(MethodInfo *)0x0);
                  uVar15 = func_?(&
                                               MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                              );
                  FUN_?(this_07,uVar15);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
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
                if (this_05 == (Component *)0x0) {
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pvVar17 = (this_05->fields)._.m_CachedPtr;
                if (pvVar17 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)this_05,(MethodInfo *)0x0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcVar11 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar17,lVar12);
                return;
              }
              goto code_?;
            }
            pSVar9 = StringLiteral_Texture_is_already_being_generat;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
              pSVar9 = StringLiteral_Texture_is_already_being_generat;
            }
          }
          else {
            pSVar9 = StringLiteral_No_screen_shot_when_not_planet_o;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
              pSVar9 = StringLiteral_No_screen_shot_when_not_planet_o;
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
          pIVar10 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar10 == (ILogger_1 *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar10,2,pSVar9);
          return;
        }
code_?:
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

