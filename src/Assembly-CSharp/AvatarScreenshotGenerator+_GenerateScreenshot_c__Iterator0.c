
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AvatarScreenshotGenerator+<GenerateScreenshot>c__Iterator0::
     AvatarScreenshotGenerator_GenerateScreenshot_c_Iterator0_MoveNext
               (AvatarScreenshotGenerator_GenerateScreenshot_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pAVar2 = (this->fields)._this;
    if (pAVar2 != (AvatarScreenshotGenerator *)0x0) {
      pPVar3 = (pAVar2->fields).particleSystems;
      if (pPVar3 != (ParticleSystem__Array *)0x0) {
        if (pAVar2 == (AvatarScreenshotGenerator *)0x0) goto code_?;
        ppPVar4 = pPVar3->vector;
        for (uVar5 = 0; (int)uVar5 < (int)pPVar3->max_length; uVar5 = uVar5 + 1) {
          if (pPVar3->max_length <= uVar5) goto code_?;
          this_01 = *ppPVar4;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            if (this_01 == (ParticleSystem *)0x0) goto code_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Simulate_2(this_01,2.0,1,(MethodInfo *)0x0);
          }
          ppPVar4 = ppPVar4 + 1;
        }
      }
      this_03 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_03,(MethodInfo *)0x0);
      (this->fields)._current = (Object *)this_03;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      return 1;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    if ((((uint)(TypeInfo__AvatarEditModeBodyController->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__AvatarEditModeBodyController->_1).cctor_started == 0)) {
      func_?(TypeInfo__AvatarEditModeBodyController);
    }
    this_00 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
    if (this_00 != (CloudyThemeBase *)0x0) {
      Theme::Theme_Deactivate((Theme *)this_00,(MethodInfo *)0x0);
      pAVar2 = (this->fields)._this;
      if (pAVar2 != (AvatarScreenshotGenerator *)0x0) {
        obj = (pAVar2->fields).bodyCloneGO;
        fVar7 = (pAVar2->fields).cameraOffset.z;
        uVar8._0_4_ = (pAVar2->fields).lookAtOffset.x;
        uVar8._4_4_ = (pAVar2->fields).lookAtOffset.y;
        fVar9 = (pAVar2->fields).lookAtOffset.z;
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action<UnityEngine::Texture2D>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)pAVar2,
                   MethodInfo__AvatarScreenshotGenerator__ScreenShotDataTexHandler_UnityEngine__Texture2D_
                   ,
                   MethodInfo__System__Action<UnityEngine::Texture2D>__Action_System__Object__void__
                  );
        if ((((uint)(TypeInfo__ScreenShotGenerator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__ScreenShotGenerator->_1).cctor_started == 0)) {
          uVar8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar8 = CONCAT44(uVar8._4_4_,TypeInfo__ScreenShotGenerator);
          func_?();
        }
        cameraOffset.y = 0.0;
        cameraOffset.x = (float)this_02;
        cameraOffset.z = fVar7;
        lookAtOffset.z = fVar9;
        uVar8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        lookAtOffset.x = (float)(undefined4)uVar8;
        lookAtOffset.y = (float)uVar8._4_4_;
        ScreenShotGenerator::ScreenShotGenerator_Generate_1
                  (obj,cameraOffset,lookAtOffset,(Action_1_UnityEngine_Texture2D_ *)this_02,0,
                   (MethodInfo *)0x0);
        (this->fields)._PC = -1;
        return 0;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar8._0_4_ = func_?(0,0);
  func_?((undefined4)uVar8);
  pcVar10 = (code *)swi(3);
  bVar6 = (*pcVar10)();
  return bVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::AvatarScreenshotGenerator+<GenerateScreenshot>c__Iterator0::
     AvatarScreenshotGenerator_GenerateScreenshot_c_Iterator0_Reset
               (AvatarScreenshotGenerator_GenerateScreenshot_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

