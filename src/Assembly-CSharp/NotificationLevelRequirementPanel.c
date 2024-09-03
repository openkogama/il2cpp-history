
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_BadgeCallback
               (NotificationLevelRequirementPanel *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Failed_to_get__);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = pTVar1;
  func_?(&(this->fields).badgeTextureAsset,pTVar1);
  pTVar1 = (this->fields).badgeTextureAsset;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (www != (UnityWebRequest *)0x0) {
      pSVar3 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_GetUrl(www,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Failed_to_get__,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    this_00 = (this->fields).LevelImage;
    pTVar1 = (this->fields).badgeTextureAsset;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    fVar5 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    if (pTVar1 != (Texture2D *)0x0) {
      iVar6 = (*(code *)(pTVar1->klass->vtable).get_width.method)
                        (pTVar1,(pTVar1->klass->vtable).set_width.methodPtr);
      iVar7 = (*(code *)(pTVar1->klass->vtable).get_height.method)
                        (pTVar1,(pTVar1->klass->vtable).set_height.methodPtr);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      rect.m_YMin = fVar5;
      rect.m_XMin = fVar4;
      rect.m_Width = (float)iVar6;
      rect.m_Height = (float)iVar7;
      pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
      pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
      value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                        (pTVar1,rect,pivot,(MethodInfo *)0x0);
      if (this_00 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Sprite GetBadgeSprite(Texture2D) */

Sprite * Assembly-CSharp.dll::NotificationLevelRequirementPanel::
         NotificationLevelRequirementPanel_GetBadgeSprite
                   (NotificationLevelRequirementPanel *this,Texture2D *source,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector2->static_fields;
  if (source != (Texture2D *)0x0) {
    iVar2 = (*(code *)(source->klass->vtable).get_width.method)
                      (source,(source->klass->vtable).set_width.methodPtr);
    iVar3 = (*(code *)(source->klass->vtable).get_height.method)
                      (source,(source->klass->vtable).set_height.methodPtr);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    rect.m_Width = (float)iVar2;
    rect.m_XMin = (pVVar1->zeroVector).x;
    rect.m_YMin = (pVVar1->zeroVector).y;
    rect.m_Height = (float)iVar3;
    pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
    pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
    pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                       (source,rect,pivot,(MethodInfo *)0x0);
    return pSVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (Sprite *)(*pcVar5)();
  return pSVar4;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_OnDestroy
               (NotificationLevelRequirementPanel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  (this->fields).badgeTextureAsset = (Texture2D *)0x0;
  func_?(&(this->fields).badgeTextureAsset);
  return;
}


/* Void OnToggleEnabled(Object, Sprite, Boolean) */

void Assembly-CSharp.dll::NotificationLevelRequirementPanel::
     NotificationLevelRequirementPanel_OnToggleEnabled
               (NotificationLevelRequirementPanel *this,Object *text,Sprite *checkmarkSprite,
               bool enabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__LevelingManager);
    func_?(&
                    MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   );
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
      if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelingManager);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__LevelingManager);
        cRam_? = '\x01';
      }
      if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LevelingManager);
      }
      if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
        return;
      }
      this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
      SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
      SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if ((text->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        BadgeManager::BadgeManager_GetBadgeTexture
                  (*piVar3,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                   (MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

