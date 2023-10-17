
/* Void Generate(GameObject, Action`1[UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate
               (GameObject *bodyCloneGO,Action_1_UnityEngine_Texture2D_ *screenShotDataTexHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&
                    AvatarScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarScreenshotGenerator>__
                   );
    func_?(&
                    BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__
                   );
    func_?(&
                    UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_Preview);
    func_?(&StringLiteral_AvatarScreenShotGenerator);
    cRam_? = '\x01';
  }
  if (bodyCloneGO != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (bodyCloneGO,(MethodInfo *)0x0);
    pAStack_2 = (AvatarScreenshotGenerator_GenerateScreenshot_d_9__Class *)0x447a0000;
    if (pTVar1 != (Transform *)0x0) {
      value.z = 1000.0;
      value.x = 1000.0;
      value.y = 1000.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,value,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)bodyCloneGO;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (bodyCloneGO,(MethodInfo *)0x0);
      auVar3._4_8_ = 0;
      auVar3._0_4_ = _UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                         ((Quaternion *)&puStack_5,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pIVar6 = (Il2CppInteropData *)pQVar4->x;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar1,*pQVar4,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (bodyCloneGO,(MethodInfo *)0x0);
        layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Preview,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively(pTVar1,layer,(MethodInfo *)0x0);
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Extensions::Extensions_ScaleBounds(bodyCloneGO,1.0,(MethodInfo *)0x0);
        this_00 = (GameObject *)func_?();
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                    (this_00,StringLiteral_AvatarScreenShotGenerator,(MethodInfo *)0x0);
          this_01 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (this_00,
                               AvatarScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarScreenshotGenerator>__
                              );
          if (this_01 != (Object__Class *)0x0) {
            (this_01->_0).interopData = pIVar6;
            func_?(&(this_01->_0).interopData,pIVar6);
            (this_01->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)bodyCloneGO;
            func_?(&(this_01->_0).typeMetadataHandle,bodyCloneGO);
            pIVar7 = (Il2CppGenericClass *)
                     Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                               ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)bodyCloneGO,
                                BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__
                               );
            (this_01->_0).generic_class = pIVar7;
            func_?(&(this_01->_0).generic_class,pIVar7);
            pIVar8 = (Il2CppClass *)
                     Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                               ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)bodyCloneGO,
                                UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______
                               );
            (this_01->_0).parent = pIVar8;
            func_?(&(this_01->_0).parent,pIVar8);
            this = (BoneAnimation *)(this_01->_0).generic_class;
            if (this != (BoneAnimation *)0x0) {
              BoneAnimation::BoneAnimation_PlayAndPauseAt
                        (this,(String *)(this_01->_0).castClass,(float)(this_01->_0).declaringType,
                         (MethodInfo *)0x0);
              if (cRam_? == '\0') {
                pAStack_2 = (AvatarScreenshotGenerator_GenerateScreenshot_d_9__Class *)
                             &TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9;
                func_?();
                cRam_? = '\x01';
              }
              pAStack_2 = TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9;
              value_00 = (Object *)func_?();
              if (value_00 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (value_00,ExceptionArgument__Enum_obj,method_00);
                value_00[1].klass = (Object__Class *)0x0;
                value_00[2].klass = this_01;
                func_?(value_00 + 2,this_01);
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_01,(IEnumerator *)value_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* IEnumerator GenerateScreenshot() */

IEnumerator *
Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_GenerateScreenshot
          (AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
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
    func_?(&TypeInfo__AvatarEditModeBodyController);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
  if (this_00 != (CloudyThemeBase *)0x0) {
    Theme::Theme_Activate((Theme *)this_00,(MethodInfo *)0x0);
    if ((this->fields).screenShotDataTexHandler != (Action_1_UnityEngine_Texture2D_ *)0x0) {
      pAVar1 = (this->fields).screenShotDataTexHandler;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,screenshotTex,(pAVar1->fields)._._.method);
    }
    pGVar2 = (this->fields).bodyCloneGO;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    (this->fields).bodyCloneGO = (GameObject *)0x0;
    func_?(&(this->fields).bodyCloneGO,0);
    (this->fields).boneAnimation = (BoneAnimation *)0x0;
    func_?(&(this->fields).boneAnimation,0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AvatarScreenshotGenerator() */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator__ctor
               (AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Walk);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  (this->fields).cameraOffset.x = (float)_UNK_?;
  (this->fields).cameraOffset.y = (float)uVar1;
  (this->fields).cameraOffset.z = 2.0;
  (this->fields).lookAtOffset.x = 0.0;
  (this->fields).lookAtOffset.y = 0.0;
  (this->fields).lookAtOffset.z = 0.0;
  (this->fields).animationToShoot = StringLiteral_Walk;
  func_?(&(this->fields).animationToShoot,StringLiteral_Walk);
  (this->fields).animationTime = 0.16;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

