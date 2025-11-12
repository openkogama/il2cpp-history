
/* Void OnScreenshotReady(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnScreenshotReady
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *text,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
                  MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReady_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UploadAvatarScreenshotHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UploadAvatarScreenshotHandler____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UploadAvatarScreenshotHandler____c);
  }
  this_00 = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__11_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__UploadAvatarScreenshotHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UploadAvatarScreenshotHandler____c);
    }
    object = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReady_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__11_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     &TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__11_0 >> 0xc)
      ;
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pRVar6 = (this->fields).toImage;
  if (pRVar6 != (RawImage *)0x0) {
    uStack_7 = _UNK_?;
    uStack_8 = _UNK_?;
    (*(pRVar6->klass->vtable).set_color.methodPtr)
              (pRVar6,&uStack_7,(pRVar6->klass->vtable).set_color.method);
    pRVar6 = (this->fields).toImage;
    if (pRVar6 != (RawImage *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,texture,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pTVar9 = (Texture2D *)(pRVar6->fields).m_Texture;
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
      if (texture != (Texture2D *)0x0 || pTVar9 != (Texture2D *)0x0) {
        if (texture == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pTVar9 == (Texture2D *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          bVar5 = (pTVar9->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pTVar9 == (Texture2D *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = (texture->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar5 = pTVar9 == texture;
        }
        if (!bVar5) {
          bVar5 = iRam_? != 0;
          (pRVar6->fields).m_Texture = (Texture *)texture;
          if (bVar5) {
            uVar1 = (uint)((ulonglong)&(pRVar6->fields).m_Texture >> 0xc);
            puVar4 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar3 = *puVar4;
              LOCK();
              uVar2 = *puVar4;
              if (uVar3 == uVar2) {
                *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
              }
              UNLOCK();
            } while (uVar3 != uVar2);
          }
          (*(pRVar6->klass->vtable).SetVerticesDirty.methodPtr)
                    (pRVar6,(pRVar6->klass->vtable).SetVerticesDirty.method);
          (*(pRVar6->klass->vtable).SetMaterialDirty.methodPtr)
                    (pRVar6,(pRVar6->klass->vtable).SetMaterialDirty.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnScreenshotReadyUploadDirect(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnScreenshotReadyUploadDirect
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *text,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReadyUploadDirect_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UploadAvatarScreenshotHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UploadAvatarScreenshotHandler____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UploadAvatarScreenshotHandler____c);
  }
  this_00 = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__10_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__UploadAvatarScreenshotHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__UploadAvatarScreenshotHandler____c);
    }
    object = TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__UploadAvatarScreenshotHandler____c___OnScreenshotReadyUploadDirect_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__10_0 = this_00;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__UploadAvatarScreenshotHandler____c->static_fields->__9__10_0 >> 0xc)
      ;
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pAVar7 = (this->fields).OnUploadScreenshot;
  if (pAVar7 == (Action_2_UnityEngine_Texture2D_String_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (*(pAVar7->fields)._._.invoke_impl)
            ((pAVar7->fields)._._.method_code,texture,text,(pAVar7->fields)._._.method);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar9 = (void *)0x0;
  if (pGVar1 != (GameObject *)0x0) {
    pvVar9 = (pGVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar9,0);
  return;
}


/* Void OnUpdatePressed() */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_OnUpdatePressed
               (UploadAvatarScreenshotHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
                  PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0___OnUpdatePressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadAvatarScreenshotHandler__UploadAndDestroy_UnityEngine__Texture2D__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screenshot_taken_successfully_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0);
  original = (this->fields).pleaseWaitPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_01,object,
               MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass12_0___OnUpdatePressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = (this->fields).screenShooter;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__UploadAvatarScreenshotHandler__UploadAndDestroy_UnityEngine__Texture2D__System__String_
               ,(MethodInfo *)0x0);
    if (this_00 != (AvatarScreenShooter *)0x0) {
      AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
                (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_02,(this->fields).avatarBody
                 ,0,StringLiteral_Screenshot_taken_successfully_,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PrepareScreenshot(MVBody, Action`2[UnityEngine.Texture2D,String], Boolean, String ByRef) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_PrepareScreenshot
               (UploadAvatarScreenshotHandler *this,MVBody *currentBody,
               Action_2_UnityEngine_Texture2D_String_ *onUploadScreenshot,bool purchasedAvatar,
               String **successText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0___PrepareScreenshot_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screenshot_taken_successfully);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_New_avatar_purchased_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0);
  bVar1 = iRam_? != 0;
  (this->fields).OnUploadScreenshot = onUploadScreenshot;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).OnUploadScreenshot >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (purchasedAvatar == 0) {
    pSVar6 = TM::TM__(StringLiteral_Screenshot_taken_successfully,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    *successText = pSVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)successText >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  else {
    pSVar6 = TM::TM__(StringLiteral_New_avatar_purchased_,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    *successText = pSVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)successText >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarBody = currentBody;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarBody >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar7 = (this->fields).invisibleBlocker;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar7,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar1 = iRam_? != 0;
  object[1].klass = pOVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__UploadAvatarScreenshotHandler____c__DisplayClass9_0___PrepareScreenshot_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar10 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
    if ((pMVar10->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar10);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar7,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar3 = (longlong)(pLVar11->fields)._size;
    uVar2 = 0;
    if (0 < lVar3) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar11->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar14 = (pLVar11->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar2) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_01,
                           (pMVar10->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void TakePurchasedScreenshot(MVBody, Action`2[UnityEngine.Texture2D,String], Boolean) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_TakePurchasedScreenshot
               (UploadAvatarScreenshotHandler *this,MVBody *currentBody,
               Action_2_UnityEngine_Texture2D_String_ *onUploadScreenshot,bool purchasedAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReadyUploadDirect_UnityEngine__Texture2D__System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_8 = (String *)0x0;
  UploadAvatarScreenshotHandler_PrepareScreenshot
            (this,currentBody,onUploadScreenshot,purchasedAvatar,&pSStackX_8,(MethodInfo *)0x0);
  this_00 = (this->fields).screenShooter;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReadyUploadDirect_UnityEngine__Texture2D__System__String_
             ,(MethodInfo *)0x0);
  if (this_00 != (AvatarScreenShooter *)0x0) {
    AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
              (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_01,(this->fields).avatarBody,0
               ,pSStackX_8,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TakeScreenshot(MVBody, Action`2[UnityEngine.Texture2D,String], Boolean) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_TakeScreenshot
               (UploadAvatarScreenshotHandler *this,MVBody *currentBody,
               Action_2_UnityEngine_Texture2D_String_ *onUploadScreenshot,bool purchasedAvatar,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReady_UnityEngine__Texture2D__System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSStackX_8 = (String *)0x0;
  UploadAvatarScreenshotHandler_PrepareScreenshot
            (this,currentBody,onUploadScreenshot,purchasedAvatar,&pSStackX_8,(MethodInfo *)0x0);
  this_00 = (this->fields).screenShooter;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Texture2D,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__UploadAvatarScreenshotHandler__OnScreenshotReady_UnityEngine__Texture2D__System__String_
             ,(MethodInfo *)0x0);
  if (this_00 != (AvatarScreenShooter *)0x0) {
    AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
              (this_00,(Action_2_UnityEngine_Texture2D_String_ *)this_01,(this->fields).avatarBody,0
               ,pSStackX_8,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UploadAndDestroy(Texture2D, String) */

void Assembly-CSharp.dll::UploadAvatarScreenshotHandler::
     UploadAvatarScreenshotHandler_UploadAndDestroy
               (UploadAvatarScreenshotHandler *this,Texture2D *texture,String *successText,
               MethodInfo *method)

{
  pAVar1 = (this->fields).OnUploadScreenshot;
  if (pAVar1 != (Action_2_UnityEngine_Texture2D_String_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,texture,successText,(pAVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

