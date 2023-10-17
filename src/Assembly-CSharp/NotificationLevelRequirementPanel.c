
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
        func_?();
      }
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
    x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    y = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    if (pTVar1 != (Texture2D *)0x0) {
      iVar4 = (*(pTVar1->klass->vtable).get_width.methodPtr)();
      z = (float)iVar4;
      iVar4 = (*(pTVar1->klass->vtable).get_height.methodPtr)
                        (pTVar1,(pTVar1->klass->vtable).get_height.method);
      fVar5 = 0.0;
      fVar6 = 0.0;
      UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
                ((Vector4 *)&stack0xffffffdc,x,y,z,(float)iVar4,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      rect.m_YMin = fVar6;
      rect.m_XMin = fVar5;
      rect.m_Width = 0.0;
      rect.m_Height = 0.0;
      pivot.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
      pivot.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
      value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                        (pTVar1,rect,pivot,(MethodInfo *)0x0);
      if (this_00 != (Image *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  y = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  if (source != (Texture2D *)0x0) {
    iVar1 = (*(source->klass->vtable).get_width.methodPtr)
                      (source,(source->klass->vtable).get_width.method);
    iVar2 = (*(source->klass->vtable).get_height.methodPtr)
                      (source,(source->klass->vtable).get_height.method);
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    puVar6 = (undefined *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
              ((Vector4 *)&stack0xffffffdc,x,y,(float)iVar1,(float)iVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      puVar6 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    rect.m_YMin = fVar4;
    rect.m_XMin = fVar3;
    rect.m_Width = fVar5;
    rect.m_Height = (float)puVar6;
    pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                       (source,rect,
                        (Vector2)((ulonglong)
                                  (uint)((TypeInfo__UnityEngine__Vector2->static_fields->oneVector).
                                         y * _UNK_?) << 0x20),(MethodInfo *)0x0);
    return pSVar7;
  }
  func_?();
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
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__NotificationLevelRequirementPanel__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
       (uVar2 = (*(text->klass->vtable).ToString.methodPtr)
                          (text,(text->klass->vtable).ToString.method), pTVar1 != (Text *)0x0)) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,uVar2,(pTVar1->klass->vtable).set_text.method);
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
      this_01 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_01 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
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
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

