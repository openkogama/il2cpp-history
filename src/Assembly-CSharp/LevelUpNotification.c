
/* Void BadgeCallback(UnityWebRequest) */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_BadgeCallback
               (LevelUpNotification *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Failed_to_get__);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_GetContent(www,(MethodInfo *)0x0);
  (this->fields).textureAsset = pTVar1;
  func_?(&(this->fields).textureAsset,pTVar1);
  pTVar1 = (this->fields).textureAsset;
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
    this_00 = (this->fields).Icon;
    pTVar1 = (this->fields).textureAsset;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    y = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    pTVar4 = (this->fields).textureAsset;
    if (pTVar4 != (Texture2D *)0x0) {
      iVar5 = (*(pTVar4->klass->vtable).get_width.methodPtr)();
      pTVar4 = (this->fields).textureAsset;
      if (pTVar4 != (Texture2D *)0x0) {
        z = (float)iVar5;
        iVar5 = (*(pTVar4->klass->vtable).get_height.methodPtr)();
        fVar6 = 0.0;
        fVar7 = 0.0;
        UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
                  ((Vector4 *)&stack0xffffffdc,x,y,z,(float)iVar5,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Vector2);
          cRam_? = '\x01';
        }
        rect.m_YMin = fVar7;
        rect.m_XMin = fVar6;
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
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_Initialize
               (LevelUpNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  uStack_1 = in_ECX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__LevelingManager);
    func_?(&StringLiteral_Level_Up_);
    cRam_? = '\x01';
  }
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
code_?:
    pTVar2 = (this->fields).label;
    pSVar3 = TM::TM__(StringLiteral_Level_Up_,(MethodInfo *)0x0);
    unaff_ESI = (Object *)0x0;
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
      return;
    }
  }
  else {
    uStack_1 = CONCAT13(4,(undefined3)uStack_1);
    key = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_1 + 3);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (data,key,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      this_00 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (this_00 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BadgeManager);
        }
        if (unaff_ESI != (Object *)0x0) {
          pIVar4 = TypeInfo__System__Int32;
          if ((unaff_ESI->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar5 = (int32_t *)func_?(unaff_ESI);
          BadgeManager::BadgeManager_GetBadgeTexture
                    (*piVar5,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pIVar4 = extraout_ECX;
code_?:
  func_?(unaff_ESI,pIVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelUpNotification::LevelUpNotification_OnDestroy
               (LevelUpNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__LevelUpNotification__BadgeCallback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    BadgeManager::BadgeManager_UnsubscribeGetBadgeRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    (this->fields).textureAsset = (Texture2D *)0x0;
    func_?(&(this->fields).textureAsset);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

