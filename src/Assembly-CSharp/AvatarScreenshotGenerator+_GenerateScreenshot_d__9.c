
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AvatarScreenshotGenerator+<GenerateScreenshot>d__9::
     AvatarScreenshotGenerator_GenerateScreenshot_d_9_MoveNext
               (AvatarScreenshotGenerator_GenerateScreenshot_d_9 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Texture2D>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarEditModeBodyController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarScreenshotGenerator__ScreenShotDataTexHandler_UnityEngine__Texture2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScreenShotGenerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  object = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    fVar2 = TypeRef__System__Activator__T._0_4_;
    if (object == (AvatarScreenshotGenerator *)0x0) goto code_?;
    if ((object->fields).particleSystems != (ParticleSystem__Array *)0x0) {
      pPVar3 = (object->fields).particleSystems;
      ppPVar4 = pPVar3->vector;
      for (uVar5 = 0; (int)uVar5 < (int)pPVar3->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pPVar3->max_length <= uVar5) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          bVar7 = (*pcVar6)();
          return bVar7;
        }
        this_00 = *ppPVar4;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_00 != (ParticleSystem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((this_00->fields)._._.m_CachedPtr != (void *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_Simulate_2(this_00,fVar2,1,(MethodInfo *)0x0);
          }
        }
        ppPVar4 = ppPVar4 + 1;
      }
    }
    pOVar8 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
    bVar9 = iRam_? != 0;
    (this->fields).__2__current = pOVar8;
    if (bVar9) {
      uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar10 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar11 == *puVar12;
        if (bVar9) {
          *puVar12 = uVar11 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    (this->fields).__1__state = 1;
    bVar7 = 1;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      this_01 = TypeInfo__AvatarEditModeBodyController->static_fields->Theme;
      if ((this_01 == (CloudyThemeBase *)0x0) ||
         (Theme::Theme_Deactivate((Theme *)this_01,(MethodInfo *)0x0),
         object == (AvatarScreenshotGenerator *)0x0)) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        bVar7 = (*pcVar6)();
        return bVar7;
      }
      obj = (object->fields).bodyCloneGO;
      uVar13._0_4_ = (object->fields).cameraOffset.x;
      uVar13._4_4_ = (object->fields).cameraOffset.y;
      fVar2 = (object->fields).cameraOffset.z;
      uVar14._0_4_ = (object->fields).lookAtOffset.x;
      uVar14._4_4_ = (object->fields).lookAtOffset.y;
      fVar15 = (object->fields).lookAtOffset.z;
      this_02 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Texture2D>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_02,(Object *)object,
                 MethodInfo__AvatarScreenshotGenerator__ScreenShotDataTexHandler_UnityEngine__Texture2D_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__ScreenShotGenerator->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ScreenShotGenerator);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__ScreenShotGenerator->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_03 = ScreenShotGenerator::ScreenShotGenerator_CreateInstance((MethodInfo *)0x0);
      if (this_03 == (ScreenShotGenerator *)0x0) goto code_?;
      VStack_16._0_8_ = uVar14;
      VStack_16.z = fVar15;
      aVStack_17[0]._0_8_ = uVar13;
      aVStack_17[0].z = fVar2;
      ScreenShotGenerator::ScreenShotGenerator_StartGenerate_1
                (this_03,obj,aVStack_17,&VStack_16,(Action_1_UnityEngine_Texture2D_ *)this_02,0,
                 (MethodInfo *)0x0);
    }
    bVar7 = 0;
  }
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AvatarScreenshotGenerator+<GenerateScreenshot>d__9::
     AvatarScreenshotGenerator_GenerateScreenshot_d_9_System_Collections_IEnumerator_Reset
               (AvatarScreenshotGenerator_GenerateScreenshot_d_9 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AvatarScreenshotGenerator___GenerateScreenshot_d__9__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

