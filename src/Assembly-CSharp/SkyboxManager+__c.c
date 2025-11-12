
/* Boolean <ComputeSkyboxSettings>b__30_0(MVSkybox) */

bool Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__ComputeSkyboxSettings_b__30_0
               (SkyboxManager_c *this,MVSkybox *s,MethodInfo *method)

{
  if (s != (MVSkybox *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__IInputSignalReceiver);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar1 = (s->fields)._InputSignalReceiver_k__BackingField;
    if (pIVar1 != (IInputSignalReceiver *)0x0) {
      uVar2 = 0;
      pIVar3 = pIVar1->klass;
      uVar4._0_1_ = (pIVar3->_1).rank;
      uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
      if (uVar4 != 0) {
        do {
          if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
              (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
            pVVar5 = &(pIVar3->vtable).UpdateSignal + (pIVar3->interfaceOffsets[uVar2].offset + 1);
            UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar6 = (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
            return bVar6;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
      puVar7 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar6 = (*(code *)*puVar7)(pIVar1,puVar7[1],(code *)*puVar7);
      return bVar6;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Single <ComputeSkyboxSettings>b__30_1(MVSkybox) */

float Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__ComputeSkyboxSettings_b__30_1
                (SkyboxManager_c *this,MVSkybox *s,MethodInfo *method)

{
  if (s != (MVSkybox *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Skybox_data_does_not_contain_sun);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_sunAngle);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(s->fields)._._._.data;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_sunAngle,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar1 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Skybox_data_does_not_contain_sun,(MethodInfo *)0x0);
        return _UNK_?;
      }
      this_01 = (s->fields)._._._.data;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_sunAngle,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            return *(float *)&pOVar2[1].klass;
          }
          FUN_?(pOVar2,lRam_?);
          pcVar3 = (code *)swi(3);
          fVar4 = (float)(*pcVar3)();
          return fVar4;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Single <ComputeSkyboxSettings>b__30_2(MVSkybox) */

float Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__ComputeSkyboxSettings_b__30_2
                (SkyboxManager_c *this,MVSkybox *s,MethodInfo *method)

{
  if (s != (MVSkybox *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Skybox_data_does_not_contain_fog);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_fogDensity);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(s->fields)._._._.data;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_fogDensity,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar1 < 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Skybox_data_does_not_contain_fog,(MethodInfo *)0x0);
        return _UNK_?;
      }
      this_01 = (s->fields)._._._.data;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_fogDensity,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            return *(float *)&pOVar2[1].klass;
          }
          FUN_?(pOVar2,lRam_?);
          pcVar3 = (code *)swi(3);
          fVar4 = (float)(*pcVar3)();
          return fVar4;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* SkyboxManager+<>c() */

void Assembly-CSharp.dll::SkyboxManager+<>c::SkyboxManager_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SkyboxManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SkyboxManager_c *)FUN_?(TypeInfo__SkyboxManager____c);
  TypeInfo__SkyboxManager____c->static_fields->__9 = pSVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__SkyboxManager____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

