
/* Void Generate(GameObject, Action`1[UnityEngine.Texture2D]) */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate(GameObject *bodyCloneGO,Action_1_UnityEngine_Texture2D_ *screenShotDataTexHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&AvatarScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarScreenshotGenerator>__);
    func_?(&BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__);
    func_?(&UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______);
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_Preview);
    func_?(&StringLiteral_AvatarScreenShotGenerator);
    cRam_? = '\x01';
  }
  if (bodyCloneGO != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(bodyCloneGO,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      value.z = 1000.0;
      value.x = 1000.0;
      value.y = 1000.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar1,value,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(bodyCloneGO,(MethodInfo *)0x0);
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffec,(Vector3)ZEXT812(0x40490fdb00000000),(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar1,*pQVar2,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(bodyCloneGO,(MethodInfo *)0x0);
        layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Preview,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively(pTVar1,layer,(MethodInfo *)0x0);
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        Extensions::Extensions_ScaleBounds(bodyCloneGO,1.0,(MethodInfo *)0x0);
        this = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor(this,StringLiteral_AvatarScreenShotGenerator,(MethodInfo *)0x0);
        if (this != (GameObject *)0x0) {
          this_00 = (Object__Class *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(this,AvatarScreenshotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarScreenshotGenerator>__);
          if (this_00 != (Object__Class *)0x0) {
            ppIVar3 = &(this_00->_0).klass;
            *ppIVar3 = (Il2CppClass *)&UNK_?;
            func_?(ppIVar3,&UNK_?);
            ppIVar4 = &(this_00->_0).interopData;
            *ppIVar4 = (Il2CppInteropData *)bodyCloneGO;
            func_?(ppIVar4,bodyCloneGO);
            pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_1(bodyCloneGO,BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<BoneAnimation>__);
            pp_Var2 = &(this_00->_0).typeMetadataHandle;
            *pp_Var2 = (Il2CppMetadataTypeHandle)pOVar5;
            func_?(pp_Var2,pOVar5);
            pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(bodyCloneGO,UnityEngine__ParticleSystem__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::ParticleSystem>______);
            ppIVar7 = &(this_00->_0).generic_class;
            *ppIVar7 = (Il2CppGenericClass *)pOVar6;
            func_?(ppIVar7,pOVar6);
            if ((BoneAnimation *)*pp_Var2 != (BoneAnimation *)0x0) {
              BoneAnimation::BoneAnimation_PlayAndPauseAt((BoneAnimation *)*pp_Var2,(String *)(this_00->_0).declaringType,(float)(this_00->_0).parent,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              method_00 = TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9;
              pOVar5 = (Object *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57(pOVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
              pOVar5[1].klass = (Object__Class *)0x0;
              pOVar5[2].klass = this_00;
              func_?(pOVar5 + 2,this_00);
              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,(IEnumerator *)pOVar5,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IEnumerator GenerateScreenshot() */

IEnumerator * Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_GenerateScreenshot(AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57(value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void ScreenShotDataTexHandler(Texture2D) */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator_ScreenShotDataTexHandler(AvatarScreenshotGenerator *this,Texture2D *screenshotTex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarEditModeBodyController);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
  if (this_00 != (CloudyThemeBase *)0x0) {
    Theme::Theme_Activate((Theme *)this_00,(MethodInfo *)0x0);
    pAVar1 = (this->fields).screenShotDataTexHandler;
    if (pAVar1 != (Action_1_UnityEngine_Texture2D_ *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code,screenshotTex,(pAVar1->fields)._._.method);
    }
    ppGVar2 = &(this->fields).bodyCloneGO;
    pGVar3 = *ppGVar2;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
    *ppGVar2 = (GameObject *)0x0;
    func_?(ppGVar2,0);
    ppBVar4 = &(this->fields).boneAnimation;
    *ppBVar4 = (BoneAnimation *)0x0;
    func_?(ppBVar4,0);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar3,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarScreenshotGenerator() */

void Assembly-CSharp.dll::AvatarScreenshotGenerator::AvatarScreenshotGenerator__ctor(AvatarScreenshotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Walk);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).animationToShoot;
  (this->fields).cameraOffset.x = -1.0;
  (this->fields).cameraOffset.y = 0.5;
  (this->fields).cameraOffset.z = 2.0;
  (this->fields).lookAtOffset.x = 0.0;
  (this->fields).lookAtOffset.y = 0.0;
  (this->fields).lookAtOffset.z = 0.0;
  *ppSVar1 = StringLiteral_Walk;
  func_?(ppSVar1,StringLiteral_Walk);
  (this->fields).animationTime = 0.16;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

