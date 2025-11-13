
/* Void Deactivate() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_Deactivate
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  this_00 = (this->fields).sayChatBubble;
  if (this_00 != (MeshRenderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      (this->fields).isIndicatorActive = 0;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(Int32, ChatAnchor) */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_Initialize
               (SayChatBubbleHandler *this,int32_t actorNr,ChatAnchor *chatAnchor,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SayChatBubbleHandler__OnSayChatMessageReceived_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).ownerActorNr = actorNr;
  (this->fields).chatAnchor = chatAnchor;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).chatAnchor >> 0xc);
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
  pAVar6 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  pDVar7 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_bool>);
  FUN_?(pDVar7,this);
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar6,pDVar7,(MethodInfo *)0x0);
  pAVar8 = TypeInfo__System__Action<int,_bool>;
  if (pDVar7 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         (Action_2_Int32_Boolean_ *)0x0;
  }
  else {
    pAVar6 = (Action_2_Int32_Boolean_ *)FUN_?(pDVar7,TypeInfo__System__Action<int,_bool>);
    if (pAVar6 == (Action_2_Int32_Boolean_ *)0x0) {
      FUN_?(pDVar7,pAVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         pAVar6;
    pAVar8 = TypeInfo__System__Action<int,_bool>;
    lVar3 = FUN_?(pDVar7,TypeInfo__System__Action<int,_bool>);
    if (lVar3 == 0) {
      FUN_?(pDVar7,pAVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__SayChatBubbleVisibilityManager->static_fields >> 0xc);
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
  pAVar10 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__SayChatBubbleHandler__OnSayChatMessageReceived_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar11 = 
  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
  ;
  if (pDVar7 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  else {
    pAVar10 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             FUN_?(pDVar7,
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
    if (pAVar10 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      FUN_?(pDVar7,pAVar11);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar10;
    pAVar11 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    lVar3 = FUN_?(pDVar7,
                          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
    if (lVar3 == 0) {
      FUN_?(pDVar7,pAVar11);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)
                    &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                     OnSayChatMessageRecieved >> 0xc);
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
  return;
}


/* Boolean IsPlayerInHearingDistance() */

bool Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_IsPlayerInHearingDistance
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                 );
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
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if ((pMVar3->fields)._.playerState != 1) {
      return 0;
    }
    pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (((pSVar4 != (SpawnRoleDataMediator *)0x0) &&
        (pSVar5 = (pSVar4->fields).position,
        pSVar5 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0)) &&
       (pSVar6 = (pSVar5->fields)._.subscribableVariable,
       pSVar6 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      uStack_7._0_4_ = (pSVar6->fields)._.value.x;
      uStack_7._4_4_ = (pSVar6->fields)._.value.y;
      fVar8 = (pSVar6->fields)._.value.z;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      if (obj != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_9 = 0;
        fStack_10 = 0.0;
        pvVar11 = (obj->fields)._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          bVar13 = (*pcVar12)();
          return bVar13;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar12 = (code *)swi(3);
          bVar13 = (*pcVar12)();
          return bVar13;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar11,&uStack_9);
        fStack_15 = fVar8 - fStack_10;
        uStack_7 = CONCAT44(uStack_7._4_4_ - uStack_9._4_4_,(float)uStack_7 - (float)uStack_9);
        fVar8 = (float)FUN_?(&uStack_7);
        return fVar8 < _UNK_?;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_OnDestroy
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SayChatBubbleHandler__OnSayChatMessageReceived_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_bool>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int,_bool>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         (Action_2_Int32_Boolean_ *)0x0;
  }
  else {
    pAVar1 = (Action_2_Int32_Boolean_ *)FUN_?(pDVar2,TypeInfo__System__Action<int,_bool>);
    if (pAVar1 == (Action_2_Int32_Boolean_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         pAVar1;
    pAVar3 = TypeInfo__System__Action<int,_bool>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<int,_bool>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__SayChatBubbleVisibilityManager->static_fields >> 0xc);
    lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar8 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pAVar10 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__SayChatBubbleHandler__OnSayChatMessageReceived_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar11 = 
  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  else {
    pAVar10 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                          );
    if (pAVar10 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      FUN_?(pDVar2,pAVar11);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar10;
    pAVar11 = 
    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar11);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                    &TypeInfo__SayChatBubbleVisibilityManager->static_fields->
                     OnSayChatMessageRecieved >> 0xc);
    lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar8 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}


/* Void OnSayChatMessageReceived(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_OnSayChatMessageReceived
               (SayChatBubbleHandler *this,int32_t actorNr,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SayChatBubbleVisibilityManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((this->fields).isActive == 0) || ((this->fields).ownerActorNr != actorNr)) ||
     (bVar1 = SayChatBubbleHandler_IsPlayerInHearingDistance(this,(MethodInfo *)0x0), bVar1 == 0)) {
    return;
  }
  this_00 = (this->fields).chatAnchor;
  if (this_00 != (ChatAnchor *)0x0) {
    anchorId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                         ((Object_1 *)this_00,(MethodInfo *)0x0);
    auStackX_8[0] = 5;
    key = (Object *)FUN_?(uRam_?,auStackX_8);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pSVar2 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      text = (String *)0x0;
      if (pSVar2 != (String *)0x0) {
        if (pSVar2->klass == pSRam0000000182db2520) {
          text = pSVar2;
        }
        if (text == (String *)0x0) {
          FUN_?(pSVar2);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ChatBubbleManager::ChatBubbleManager_ShowChatBubble
                (text,anchorId,(this->fields).chatAnchor,(MethodInfo *)0x0);
      if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard ==
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        return;
      }
      pAVar4 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,data,(pAVar4->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSayBubbleIndicatorVisibility(Int32, Boolean) */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_SetSayBubbleIndicatorVisibility
               (SayChatBubbleHandler *this,int32_t actorNr,bool shouldBeVisible,MethodInfo *method)

{
  if (((this->fields).isActive == 0) || ((this->fields).ownerActorNr != actorNr)) {
    return;
  }
  this_00 = (this->fields).sayChatBubble;
  if ((this_00 != (MeshRenderer *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,shouldBeVisible,(MethodInfo *)0x0);
    (this->fields).isIndicatorActive = shouldBeVisible;
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_Update
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if ((this->fields).isIndicatorActive != 0) {
    bVar1 = SayChatBubbleHandler_IsPlayerInHearingDistance(this,(MethodInfo *)0x0);
    this_00 = (this->fields).sayChatBubble;
    if (bVar1 == 0) {
      if (this_00 == (MeshRenderer *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_00,(MethodInfo *)0x0);
      CStack_2._0_8_ = _UNK_?;
      CStack_2._8_8_ = _UNK_?;
    }
    else {
      if (this_00 == (MeshRenderer *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_00,(MethodInfo *)0x0);
      CStack_2._0_8_ = _UNK_?;
      CStack_2._8_8_ = _UNK_?;
    }
    if (this_01 == (Material *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_01,&CStack_2,(MethodInfo *)0x0);
  }
  return;
}

