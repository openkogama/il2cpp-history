
/* Void ScreenShotDataTexHandler(Texture2D) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_ScreenShotDataTexHandler
               (AvatarScreenShooter *this,Texture2D *screenshotTex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).bodyCloneGO;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
            (this->fields).callback;
  (this->fields).bodyCloneGO = (GameObject *)0x0;
  (this->fields).isMakingScreenShot = 0;
  if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
    System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
    Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
              (this_00,(Object *)screenshotTex,
               (ReflectionProbe_ReflectionProbeEvent__Enum)(this->fields).successMessage,
               MethodInfo__System__Action<UnityEngine::Texture2D,_System::String>__Invoke_UnityEngine__Texture2D__System__String_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TakeScreenShot(Action`2[UnityEngine.Texture2D,String], MVBody, Boolean, String) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
               (AvatarScreenShooter *this,Action_2_UnityEngine_Texture2D_String_ *callback,
               MVBody *body,bool ignoreAccessories,String *successMessage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_screenshot_generation_of_avatar_,(MethodInfo *)0x0);
  if ((this->fields).isMakingScreenShot == 0) {
    (this->fields).callback = callback;
    (this->fields).successMessage = successMessage;
    if (body != (MVBody *)0x0) {
      original = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)body,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                          ((XpBoostParticlePreviewer *)original,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      (this->fields).bodyCloneGO = (GameObject *)this_00;
      if (this_00 == (XpBoostParticlePreviewer *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        func_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         ((GameObject *)this_00,
                          SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                         );
      uVar3 = 0;
      if (pUVar2 == (UseInteratorVisualization__Array *)0x0) goto code_?;
      ppUVar4 = pUVar2->vector;
      while( true ) {
        if ((int)pUVar2->max_length <= (int)uVar3) break;
        if (pUVar2->max_length <= uVar3) goto code_?;
        this = (AvatarScreenShooter *)*ppUVar4;
        if (this == (AvatarScreenShooter *)0x0) goto code_?;
        SkinnedMeshOptimizer::SkinnedMeshOptimizer_DisableOptimizer
                  ((SkinnedMeshOptimizer *)this,(MethodInfo *)0x0);
        if (pUVar2->max_length <= uVar3) goto code_?;
        if (*ppUVar4 == (UseInteratorVisualization *)0x0) goto code_?;
        ignoreAccessories = 0;
        SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                  ((SkinnedMeshOptimizer *)*ppUVar4,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppUVar4 = ppUVar4 + 1;
      }
      if (ignoreAccessories != 0) {
        this = (AvatarScreenShooter *)(this->fields).bodyCloneGO;
        if (this == (AvatarScreenShooter *)0x0) goto code_?;
        pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           ((GameObject *)this,
                            AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______
                           );
        uVar3 = 0;
        if (pUVar2 == (UseInteratorVisualization__Array *)0x0) goto code_?;
        ppUVar4 = pUVar2->vector;
        while( true ) {
          if ((int)pUVar2->max_length <= (int)uVar3) break;
          if (pUVar2->max_length <= uVar3) goto code_?;
          this = (AvatarScreenShooter *)*ppUVar4;
          if (this == (AvatarScreenShooter *)0x0) goto code_?;
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar5,(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
          ppUVar4 = ppUVar4 + 1;
        }
      }
      pGVar5 = (this->fields).bodyCloneGO;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__AvatarScreenShooter__ScreenShotDataTexHandler_UnityEngine__Texture2D_,
                 MethodInfo__System__Action<UnityEngine::Texture2D>__Action_System__Object__void__);
      AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate
                (pGVar5,(Action_1_UnityEngine_Texture2D_ *)this_01,(MethodInfo *)0x0);
    }
    (this->fields).isMakingScreenShot = 1;
  }
  return;
}


/* AvatarScreenShooter() */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter__ctor
               (AvatarScreenShooter *this,MethodInfo *method)

{
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
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  func_?(&fStack_5,0x435c0000,0x43500000,0x43480000,0x43480000,0);
  (this->fields).previewPosition.m_XMin = fStack_5;
  (this->fields).previewPosition.m_YMin = fStack_6;
  (this->fields).previewPosition.m_Width = fStack_7;
  (this->fields).previewPosition.m_Height = fStack_8;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

