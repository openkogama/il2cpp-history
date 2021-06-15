
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_BadgeCallback
               (LevelUpNotification *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).textureAsset = pTVar1;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (www != (UnityWebRequest *)0x0) {
      pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Failed_to_get__,pSVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        _puStack_10 = CONCAT44(&UNK_?,puStack_4);
        func_?();
      }
      _puStack_10 = CONCAT44(pSVar3,&UNK_?);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).Icon;
    pTVar1 = (this->fields).textureAsset;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
    pTVar5 = (this->fields).textureAsset;
    if (pTVar5 != (Texture2D *)0x0) {
      iVar6 = (*(code *)(pTVar5->klass->vtable).get_width.method)();
      pTVar5 = (this->fields).textureAsset;
      if (pTVar5 != (Texture2D *)0x0) {
        (*(code *)(pTVar5->klass->vtable).get_height.method)();
        _puStack_10 = 0;
        func_?(&puStack_4,(float)iVar6);
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        fVar10 = 0.0;
        func_?();
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_one((MethodInfo *)0x0)
        ;
        VVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                          (VVar11,2.0,(MethodInfo *)0x0);
        rect.m_YMin = (float)uVar8;
        rect.m_XMin = (float)uVar7;
        rect.m_Width = (float)uVar9;
        rect.m_Height = fVar10;
        value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                          (pTVar1,rect,VVar11,(MethodInfo *)0x0);
        if (this_00 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_Initialize
               (LevelUpNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
code_?:
    pTVar1 = (this->fields).label;
    pSVar2 = TM::TM__(StringLiteral_Level_Up_,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      return;
    }
  }
  else {
    key = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar4 = CONCAT44(TypeInfo__System__Int32,pPVar3);
      if (pPVar3 != (Pool *)0x0) {
        if ((pPVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar5 = (int32_t *)func_?(pPVar3);
        level = *piVar5;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,
                   MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__BadgeManager);
        }
        BadgeManager::BadgeManager_GetBadgeTexture
                  (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                   (MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  uVar4 = func_?(0);
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_OnDestroy
               (LevelUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).textureAsset = (Texture2D *)0x0;
  return;
}

