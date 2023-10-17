
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AvatarScreenshotGenerator+<GenerateScreenshot>d__9::
     AvatarScreenshotGenerator_GenerateScreenshot_d_9_MoveNext
               (AvatarScreenshotGenerator_GenerateScreenshot_d_9 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Texture2D>);
    func_?(&TypeInfo__AvatarEditModeBodyController);
    func_?(&
                    MethodInfo__AvatarScreenshotGenerator__ScreenShotDataTexHandler_UnityEngine__Texture2D_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__ScreenShotGenerator);
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  object = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (object != (AvatarScreenshotGenerator *)0x0) {
      if ((object->fields).particleSystems != (ParticleSystem__Array *)0x0) {
        pPVar2 = (object->fields).particleSystems;
        ppPVar3 = pPVar2->vector;
        for (uVar4 = 0; (int)uVar4 < (int)pPVar2->max_length; uVar4 = uVar4 + 1) {
          if (pPVar2->max_length <= uVar4) goto code_?;
          this_00 = *ppPVar3;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            if (this_00 == (ParticleSystem *)0x0) goto code_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Simulate_2(this_00,2.0,1,(MethodInfo *)0x0);
          }
          ppPVar3 = ppPVar3 + 1;
        }
      }
      this_02 = (TweenRunner_1_FloatTween_ *)
                func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
      if (this_02 != (TweenRunner_1_FloatTween_ *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
        TweenRunner_1_FloatTween___ctor(this_02,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)this_02;
        func_?(&(this->fields).__2__current,this_02);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    this_01 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
    if ((this_01 != (CloudyThemeBase *)0x0) &&
       (Theme::Theme_Deactivate((Theme *)this_01,(MethodInfo *)0x0),
       object != (AvatarScreenshotGenerator *)0x0)) {
      uVar6 = (object->fields).cameraOffset.y;
      fVar7 = (object->fields).cameraOffset.z;
      obj = (object->fields).bodyCloneGO;
      lookAtOffset = (object->fields).lookAtOffset;
      this_03 = (Action_1_Object_ *)
                func_?(TypeInfo__System__Action<UnityEngine::Texture2D>);
      if (this_03 != (Action_1_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                  (this_03,(Object *)object,
                   MethodInfo__AvatarScreenshotGenerator__ScreenShotDataTexHandler_UnityEngine__Texture2D_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__ScreenShotGenerator->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__ScreenShotGenerator,uVar6);
        }
        auVar8._4_4_ = fVar7;
        auVar8._0_4_ = uVar6;
        auVar8._8_4_ = 0;
        ScreenShotGenerator::ScreenShotGenerator_Generate_1
                  (obj,(Vector3)(auVar8 << 0x20),lookAtOffset,
                   (Action_1_UnityEngine_Texture2D_ *)this_03,0,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar5 = (*pcVar9)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AvatarScreenshotGenerator+<GenerateScreenshot>d__9::
     AvatarScreenshotGenerator_GenerateScreenshot_d_9_System_Collections_IEnumerator_Reset
               (AvatarScreenshotGenerator_GenerateScreenshot_d_9 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

