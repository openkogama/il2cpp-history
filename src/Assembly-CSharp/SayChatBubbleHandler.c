
/* Void Deactivate() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_Deactivate
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).sayChatBubble;
  (this->fields).isActive = 0;
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
  func_?();
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
    func_?(&TypeInfo__System__Action<int,_bool>);
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__SayChatBubbleHandler__OnSayChatMessageReceived_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_);
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  (this->fields).ownerActorNr = actorNr;
  (this->fields).chatAnchor = chatAnchor;
  func_?(&(this->fields).chatAnchor,chatAnchor);
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  pUVar2 = (UnityAction_2_System_Int32_System_Int32_ *)
           func_?(TypeInfo__System__Action<int,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (pUVar2,(Object *)this,
             MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_,
             (MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         (Action_2_Int32_Boolean_ *)0x0;
  }
  else {
    pAVar1 = (Action_2_Int32_Boolean_ *)func_?();
    if (pAVar1 == (Action_2_Int32_Boolean_ *)0x0) goto code_?;
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         pAVar1;
    iVar4 = func_?();
    if (iVar4 == 0) goto code_?;
  }
  func_?();
  pAVar5 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  pUVar2 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (pUVar2,(Object *)this,
             MethodInfo__SayChatBubbleHandler__OnSayChatMessageReceived_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar5 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           func_?();
  if (pAVar5 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar5;
    iVar4 = func_?();
    if (iVar4 != 0) goto code_?;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsPlayerInHearingDistance() */

bool Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_IsPlayerInHearingDistance
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
      pSVar2 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (pSVar2 != (SpawnRoleDataMediator *)0x0) {
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[UnityEngine::Vector3]::
        SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                  ((Vector3 *)&stack0xffffffe0,
                   (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar2->fields).position,
                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                  );
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffd4,this_02,(MethodInfo *)0x0);
          fVar3 = (float10)func_?();
          return (float)fVar3 < _UNK_?;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_OnDestroy
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_bool>);
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    MethodInfo__SayChatBubbleHandler__OnSayChatMessageReceived_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_);
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Action<int,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int,_bool>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         (Action_2_Int32_Boolean_ *)0x0;
    pAStack4 = (Action_2_Int32_Boolean___Class *)0x0;
code_?:
    func_?();
    return;
  }
  pAStack4 = TypeInfo__System__Action<int,_bool>;
  pAVar1 = (Action_2_Int32_Boolean_ *)func_?();
  if (pAVar1 != (Action_2_Int32_Boolean_ *)0x0) {
    TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
         pAVar1;
    pAVar3 = TypeInfo__System__Action<int,_bool>;
    pAStack4 = TypeInfo__System__Action<int,_bool>;
    pAStack4 = (Action_2_Int32_Boolean___Class *)func_?();
    if (pAStack4 != (Action_2_Int32_Boolean___Class *)0x0) goto code_?;
  }
  pAStack4 = pAVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSayChatMessageReceived(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_OnSayChatMessageReceived
               (SayChatBubbleHandler *this,int32_t actorNr,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__SayChatBubbleVisibilityManager);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  if ((((this->fields).isActive == 0) || ((this->fields).ownerActorNr != actorNr)) ||
     (bVar2 = SayChatBubbleHandler_IsPlayerInHearingDistance(this,(MethodInfo *)0x0), bVar2 == 0)) {
    return;
  }
  this_00 = (pSVar1->fields).chatAnchor;
  if (this_00 != (ChatAnchor *)0x0) {
    anchorId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                         ((Object_1 *)this_00,(MethodInfo *)0x0);
    this = (SayChatBubbleHandler *)CONCAT13(5,this._0_3_);
    key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    pDVar3 = data;
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this = (SayChatBubbleHandler *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
      text.m_Index = 0;
      if (this == (SayChatBubbleHandler *)0x0) {
code_?:
        actorNr = 0;
        this = (SayChatBubbleHandler *)(pSVar1->fields).chatAnchor;
        ChatBubbleManager::ChatBubbleManager_ShowChatBubble
                  ((String *)text.m_Index,anchorId,(ChatAnchor *)this,(MethodInfo *)0x0);
        if (TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard ==
            (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
          return;
        }
        pAVar4 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
        pvStack5 = (pAVar4->fields)._._.method;
        pDStack6 = pDVar3;
        method = (pAVar4->fields)._._.method_code;
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        (*(pAVar4->fields)._._.invoke_impl)();
        return;
      }
      if (*(String__Class **)this == TypeInfo__System__String) {
        text = (TextureId)this;
      }
      actorNr = (int32_t)TypeInfo__System__String;
      if ((String *)text.m_Index != (String *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  this = extraout_ECX;
  actorNr = (int32_t)extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_Update
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if ((this->fields).isIndicatorActive == 0) {
    return;
  }
  bVar1 = SayChatBubbleHandler_IsPlayerInHearingDistance(this,(MethodInfo *)0x0);
  this_00 = (this->fields).sayChatBubble;
  if (bVar1 == 0) {
    if ((this_00 != (MeshRenderer *)0x0) &&
       (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)this_00,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) {
      value.g = (float)_UNK_?;
      value.r = (float)_UNK_?;
      value.b = (float)_UNK_?;
      value.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((this_00 != (MeshRenderer *)0x0) &&
          (pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                              ((Renderer *)this_00,(MethodInfo *)0x0), pMVar2 != (Material *)0x0)) {
    value_00.g = (float)_UNK_?;
    value_00.r = (float)_UNK_?;
    value_00.b = (float)_UNK_?;
    value_00.a = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (pMVar2,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

