
/* Void Deactivate() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_Deactivate
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).sayChatBubble;
  (this->fields).isActive = 0;
  if (this_00 != (MeshRenderer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      (this->fields).isIndicatorActive = 0;
      return;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).ownerActorNr = actorNr;
  (this->fields).chatAnchor = chatAnchor;
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_,
             MethodInfo__System__Action<int,_bool>__Action_System__Object__void__);
  pAVar3 = (Action_2_Int32_Boolean_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_Boolean_ *)0x0;
  if (pAVar3 != (Action_2_Int32_Boolean_ *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action<int,_bool>) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action_2_Int32_Boolean_ *)0x0) goto code_?;
  }
  TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
       pAVar1;
  pAVar4 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__SayChatBubbleHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  pAVar5 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
  if (pAVar5 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
    if (pAVar5->klass ==
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pAVar4 = pAVar5;
    }
    if (pAVar4 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar4;
  return;
}


/* Boolean IsPlayerInHearingDistance() */

bool Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_IsPlayerInHearingDistance
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      bVar1 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (this_02 != (SpawnRoleDataMediator *)0x0) {
        s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
            PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,(MethodInfo *)0x0)
        ;
        pVVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           ((Vector3 *)&stack0xfffffff0,s,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        uVar3 = pVVar2->x;
        fVar4 = pVVar2->z;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          puVar5 = &UNK_?;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd0,this_03,(MethodInfo *)0x0);
          uVar6._0_4_ = pVVar2->x;
          uVar6._4_4_ = pVVar2->y;
          fVar7 = pVVar2->z;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.y = (float)puVar5;
          a.x = (float)uVar3;
          a.z = fVar4;
          b.z = fVar7;
          b.x = (float)(int)uVar6;
          b.y = (float)(int)((ulonglong)uVar6 >> 0x20);
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)&stack0xffffffd0,a,b,(MethodInfo *)0x0);
          fVar8 = (float10)func_?();
          return (float)fVar8 < _UNK_?;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar1 = (*pcVar9)();
  return bVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_OnDestroy
               (SayChatBubbleHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->
           OnSayChatIndicatorVisibilityChange;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<int,_bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__SayChatBubbleHandler__SetSayBubbleIndicatorVisibility_int__bool_,
             MethodInfo__System__Action<int,_bool>__Action_System__Object__void__);
  pAVar3 = (Action_2_Int32_Boolean_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_2_Int32_Boolean_ *)0x0;
  if (pAVar3 != (Action_2_Int32_Boolean_ *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action<int,_bool>) {
      pAVar1 = pAVar3;
    }
    pAStack4 =
         (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object___Class
          *)TypeInfo__System__Action<int,_bool>;
    if (pAVar1 == (Action_2_Int32_Boolean_ *)0x0) goto code_?;
  }
  TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatIndicatorVisibilityChange =
       pAVar1;
  pAStack4 =
       TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
  ;
  pAVar5 = TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__SayChatBubbleHandler__OnSayChatMessageRecieved_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,
             MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
            );
  pAVar6 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar5 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
           0x0;
  if (pAVar6 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
    if (pAVar6->klass ==
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
       ) {
      pAVar5 = pAVar6;
    }
    pAStack4 =
         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pAVar5 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
code_?:
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageRecieved = pAVar5;
  return;
}


/* Void OnSayChatMessageRecieved(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::SayChatBubbleHandler::SayChatBubbleHandler_OnSayChatMessageRecieved
               (SayChatBubbleHandler *this,int32_t actorNr,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    key = (Type *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    obj = data;
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this = (SayChatBubbleHandler *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
      text = (Pool *)0x0;
      if ((Pool *)this == (Pool *)0x0) {
code_?:
        actorNr = 0;
        this = (SayChatBubbleHandler *)(pSVar1->fields).chatAnchor;
        ChatBubbleManager::ChatBubbleManager_ShowChatBubble
                  ((String *)text,anchorId,(ChatAnchor *)this,(MethodInfo *)0x0);
        method = (MethodInfo *)
                 TypeInfo__SayChatBubbleVisibilityManager->static_fields->OnSayChatMessageHeard;
        if ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)method
            == (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0)
        {
          return;
        }
        data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                   method,(Dictionary_2_System_String_System_Object_ *)obj,
                   MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Invoke_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                  );
        return;
      }
      if ((String__Class *)((Pool *)this)->klass == TypeInfo__System__String) {
        text = (Pool *)this;
      }
      actorNr = (int32_t)TypeInfo__System__String;
      if (text != (Pool *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  this = (SayChatBubbleHandler *)extraout_ECX;
  actorNr = (int32_t)extraout_EDX;
code_?:
  func_?();
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
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
  {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,shouldBeVisible,(MethodInfo *)0x0);
    (this->fields).isIndicatorActive = shouldBeVisible;
    return;
  }
  func_?(0);
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
  if (bVar1 == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
              ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    pMVar2 = (this->fields).sayChatBubble;
    if ((pMVar2 != (MeshRenderer *)0x0) &&
       (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)pMVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
      value.g = (float)_UNK_?;
      value.r = (float)_UNK_?;
      value.b = (float)_UNK_?;
      value.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                       ((Color *)&stack0xffffffec,(MethodInfo *)0x0);
    fVar5 = pCVar4->a;
    pMVar2 = (this->fields).sayChatBubble;
    if (pMVar2 != (MeshRenderer *)0x0) {
      fVar6 = 0.0;
      puVar7 = &UNK_?;
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         ((Renderer *)pMVar2,(MethodInfo *)0x0);
      if (pMVar3 != (Material *)0x0) {
        value_00.g = (float)pMVar2;
        value_00.r = (float)puVar7;
        value_00.b = fVar6;
        value_00.a = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar3,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

