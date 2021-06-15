
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_BadgeCallback
               (NotificationLevelRequirementPanel *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = pTVar1;
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
        _puStack_c = CONCAT44(&UNK_?,puStack_4);
        func_?();
      }
      _puStack_c = CONCAT44(pSVar3,&UNK_?);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).LevelImage;
    pTVar1 = (this->fields).badgeTextureAsset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
    if (pTVar1 != (Texture2D *)0x0) {
      iVar5 = (*(code *)(pTVar1->klass->vtable).get_width.method)();
      (*(code *)(pTVar1->klass->vtable).get_height.method)
                (pTVar1,(pTVar1->klass->vtable).set_height.methodPtr);
      _puStack_c = 0;
      func_?(&puStack_4,(float)iVar5);
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      fVar9 = 0.0;
      func_?();
      VVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_one((MethodInfo *)0x0);
      VVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                        (VVar10,2.0,(MethodInfo *)0x0);
      rect.m_YMin = (float)uVar7;
      rect.m_XMin = (float)uVar6;
      rect.m_Width = (float)uVar8;
      rect.m_Height = fVar9;
      value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                        (pTVar1,rect,VVar10,(MethodInfo *)0x0);
      if (this_00 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Sprite GetBadgeSprite(Texture2D) */

Sprite * Assembly-CSharp.dll::NotificationLevelRequirementPanel::
         NotificationLevelRequirementPanel_GetBadgeSprite
                   (NotificationLevelRequirementPanel *this,Texture2D *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector2);
  }
  VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
  if (source != (Texture2D *)0x0) {
    iVar2 = (*(code *)(source->klass->vtable).get_width.method)
                      (source,(source->klass->vtable).set_width.methodPtr);
    iVar3 = (*(code *)(source->klass->vtable).get_height.method)
                      (source,(source->klass->vtable).set_height.methodPtr);
    uStack_4 = 0;
    func_?(&uStack_4,(float)iVar2,(float)iVar3,0);
    uVar5 = 0;
    uVar6 = 0;
    func_?(&stack0xffffffe4,VVar1,(undefined4)uStack_4,uStack_4._4_4_,0);
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_one((MethodInfo *)0x0);
    VVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Division_1
                      (VVar1,2.0,(MethodInfo *)0x0);
    rect.m_Width = (float)uVar6;
    rect.m_XMin = (float)(int)uVar5;
    rect.m_YMin = (float)(int)((ulonglong)uVar5 >> 0x20);
    rect.m_Height = 0.0;
    pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                       (source,rect,VVar1,(MethodInfo *)0x0);
    return pSVar7;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pSVar7 = (Sprite *)(*pcVar8)();
  return pSVar7;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_OnDestroy
               (NotificationLevelRequirementPanel *this,MethodInfo *method)

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
             MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  return;
}


/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_OnToggleEnabled
               (NotificationLevelRequirementPanel *this,Object *text,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.checkmark;
  if (this_00 != (Image *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
              (this_00,checkmarkSprite,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._.textField;
    if ((text != (Object *)0x0) &&
       (uVar2 = (*(code *)(text->klass->vtable).ToString.method)(text,text->klass[1]._0.image),
       pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__LevelingManager);
      }
      bVar3 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                 ,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
        func_?();
      }
      if ((text->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?();
        BadgeManager::BadgeManager_GetBadgeTexture
                  (*piVar4,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

