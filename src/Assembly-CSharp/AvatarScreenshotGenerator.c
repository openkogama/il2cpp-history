
/* Void Generate(GameObject, Action`1[UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate
               (GameObject *bodyCloneGO,Action_1_UnityEngine_Texture2D_ *screenShotDataTexHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bodyCloneGO != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (bodyCloneGO,(MethodInfo *)0x0);
    fVar2 = 0.0;
    uStack_3 = 0;
    func_?(&uStack_3,0x447a0000,0x447a0000,0x447a0000,0);
    if (pTVar1 != (Transform *)0x0) {
      value.z = fVar2;
      value.x = (float)(undefined4)uStack_3;
      value.y = (float)uStack_3._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,value,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (bodyCloneGO,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                         (&QStack_5,0.0,180.0,0.0,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar1,*pQVar4,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (bodyCloneGO,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively_1(pTVar1,StringLiteral_Preview,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?();
        }
        uStack_3 = CONCAT44(&UNK_?,(undefined4)uStack_3);
        Extensions::Extensions_ScaleBounds(bodyCloneGO,1.0,(MethodInfo *)0x0);
        this = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this,StringLiteral_AvatarScreenShotGenerator,(MethodInfo *)0x0);
        if (this != (GameObject *)0x0) {
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                              (this,
                               AvatarScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarScreenshotGenerator>__
                              );
          if (this_00 != (Worker *)0x0) {
            this_00[4].fields._._._._.m_CachedPtr = screenShotDataTexHandler;
            this_00[4].monitor = (MonitorData *)bodyCloneGO;
            pWVar6 = (Worker__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_29
                               (bodyCloneGO,
                                BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__
                               );
            this_00[4].klass = pWVar6;
            pUVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_29
                               (bodyCloneGO,
                                UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                               );
            this_00[3].fields._._._._.m_CachedPtr = pUVar7;
            if (this_00[4].klass != (Worker__Class *)0x0) {
              pWVar6 = this_00[3].klass;
              BoneAnimation::BoneAnimation_PlayAndPauseAt
                        ((BoneAnimation *)this_00[4].klass,(String *)pWVar6,
                         (float)this_00[3].monitor,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                QStack_5.y = _UNK_?;
                QStack_5.x = (float)&UNK_?;
                func_?();
                cRam_? = '\x01';
              }
              QStack_5.y = (float)
                            TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_c__Iterator0;
              QStack_5.x = (float)&UNK_?;
              this_01 = (ScaleAnimationBase *)func_?();
              ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)pWVar6);
              if (this_01 != (ScaleAnimationBase *)0x0) {
                (this_01->fields)._._._._.m_CachedPtr = this_00;
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_00,(IEnumerator *)this_01,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IEnumerator GenerateScreenshot() */

IEnumerator *
Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_GenerateScreenshot
          (AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void ScreenShotDataTexHandler(Texture2D) */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::
     AvatarScreenshotGenerator_ScreenShotDataTexHandler
               (AvatarScreenshotGenerator *this,Texture2D *screenshotTex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
    func_?(TypeInfo__AvatarEditModeBodyController);
  }
  this_00 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
  if (this_00 != (CloudyThemeBase *)0x0) {
    Theme::Theme_Activate((Theme *)this_00,(MethodInfo *)0x0);
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).screenShotDataTexHandler;
    if (this_01 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_01,(Dictionary_2_System_String_System_Object_ *)screenshotTex,
                 MethodInfo__System__Action<UnityEngine::Texture2D>__Invoke_UnityEngine__Texture2D_)
      ;
    }
    pGVar1 = (this->fields).bodyCloneGO;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    (this->fields).bodyCloneGO = (GameObject *)0x0;
    (this->fields).boneAnimation = (BoneAnimation *)0x0;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar1,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarScreenshotGenerator() */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator__ctor
               (AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0xbf800000,0x3f000000,0x40000000,0);
  fStack_3 = 0.0;
  (this->fields).cameraOffset.x = (float)(undefined4)uStack_2;
  (this->fields).cameraOffset.y = (float)uStack_2._4_4_;
  (this->fields).cameraOffset.z = fStack_1;
  uStack_4 = 0;
  func_?(&uStack_4,0,0,0,0);
  (this->fields).lookAtOffset.x = (float)(undefined4)uStack_4;
  (this->fields).lookAtOffset.y = (float)uStack_4._4_4_;
  (this->fields).lookAtOffset.z = fStack_3;
  (this->fields).animationToShoot = StringLiteral_Walk;
  (this->fields).animationTime = 0.16;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

