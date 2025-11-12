
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Constrain
                  (ThemeFogTypeSelector *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fog_mode_is_outside_expected_ran);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).availableModes;
  if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    iVar2 = value % (int)pTVar1->max_length;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar3 = -iVar2;
    if (iVar3 < 0) {
      iVar3 = iVar2;
    }
    if (iVar3 != value) {
      iVar3 = 0;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Fog_mode_is_outside_expected_ran,(MethodInfo *)0x0);
    }
    return iVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void Decrement() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Decrement
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  iVar1 = (this->fields).modeIndex + -1;
  (this->fields).modeIndex = iVar1;
  if (iVar1 < 0) {
    pTVar2 = (this->fields).availableModes;
    if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).modeIndex = iVar1 + (int)pTVar2->max_length;
  }
  uVar4 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar2 = (this->fields).availableModes;
  pTVar5 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar4;
  if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    if ((uint)pTVar2->max_length <= uVar4) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar2->vector[(int)uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar5 != (Text *)0x0)) {
      (*(pTVar5->klass->vtable).set_text.methodPtr)
                (pTVar5,(pTVar2->vector[(int)uVar4]->fields)._Name_k__BackingField,
                 (pTVar5->klass->vtable).set_text.method);
      pTVar2 = (this->fields).availableModes;
      pAVar6 = (this->fields).onChange;
      if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar4 = (this->fields).modeIndex;
        if ((uint)pTVar2->max_length <= uVar4) goto code_?;
        if ((pTVar2->vector[(int)uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pAVar6 != (Action_1_Int32_ *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar6->fields)._._.invoke_impl)
                    ((pAVar6->fields)._._.method_code,
                     (pTVar2->vector[(int)uVar4]->fields)._Mode_k__BackingField,
                     (pAVar6->fields)._._.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Increment() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Increment
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  pTVar1 = (this->fields).availableModes;
  iVar2 = (this->fields).modeIndex + 1;
  (this->fields).modeIndex = iVar2;
  if (pTVar1 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)pTVar1->max_length <= iVar2) {
    (this->fields).modeIndex = iVar2 - (int)pTVar1->max_length;
  }
  uVar4 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar1 = (this->fields).availableModes;
  pTVar5 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar4;
  if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    if ((uint)pTVar1->max_length <= uVar4) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar1->vector[(int)uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar5 != (Text *)0x0)) {
      (*(pTVar5->klass->vtable).set_text.methodPtr)
                (pTVar5,(pTVar1->vector[(int)uVar4]->fields)._Name_k__BackingField,
                 (pTVar5->klass->vtable).set_text.method);
      pTVar1 = (this->fields).availableModes;
      pAVar6 = (this->fields).onChange;
      if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar4 = (this->fields).modeIndex;
        if ((uint)pTVar1->max_length <= uVar4) goto code_?;
        if ((pTVar1->vector[(int)uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pAVar6 != (Action_1_Int32_ *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar6->fields)._._.invoke_impl)
                    ((pAVar6->fields)._._.method_code,
                     (pTVar1->vector[(int)uVar4]->fields)._Mode_k__BackingField,
                     (pAVar6->fields)._._.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(IntAttribute, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Initialize
               (ThemeFogTypeSelector *this,IntAttribute *attrib,Action_1_Int32_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__get_Name__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).onChange = onChange;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).onChange >> 0xc);
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
  pTVar6 = (this->fields).availableModes;
  uVar2 = 0;
  if (pTVar6 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    lVar7 = 0x20;
    while ((int)uVar2 < (int)pTVar6->max_length) {
      if (pTVar6 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
      if ((uint)pTVar6->max_length <= uVar2) goto code_?;
      lVar8 = *(longlong *)((longlong)pTVar6->vector + lVar7 + -0x20);
      if ((lVar8 == 0) || (attrib == (IntAttribute *)0x0)) goto code_?;
      if (*(int *)(lVar8 + 0x10) == (attrib->fields)._._.value) {
        (this->fields).modeIndex = uVar2;
        uVar2 = uVar2 + 1;
        lVar7 = lVar7 + 8;
      }
      else {
        uVar2 = uVar2 + 1;
        lVar7 = lVar7 + 8;
      }
    }
    iVar9 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
    (this->fields).modeIndex = iVar9;
    if ((attrib != (IntAttribute *)0x0) &&
       (pTVar10 = (this->fields).settingNameLabel, pTVar10 != (Text *)0x0)) {
      (*(pTVar10->klass->vtable).set_text.methodPtr)
                (pTVar10,(attrib->fields)._.name,(pTVar10->klass->vtable).set_text.method);
      pTVar6 = (this->fields).availableModes;
      pTVar10 = (this->fields).presetNameLabel;
      if (pTVar6 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar2 = (this->fields).modeIndex;
        if ((uint)pTVar6->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((pTVar6->vector[(int)uVar2] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pTVar10 != (Text *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pTVar10->klass->vtable).set_text.methodPtr)
                    (pTVar10,(pTVar6->vector[(int)uVar2]->fields)._Name_k__BackingField,
                     (pTVar10->klass->vtable).set_text.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnSettingChanged() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_OnSettingChanged
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  uVar1 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar2 = (this->fields).availableModes;
  pTVar3 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar1;
  if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    if ((uint)pTVar2->max_length <= uVar1) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pTVar2->vector[(int)uVar1] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar3 != (Text *)0x0)) {
      (*(pTVar3->klass->vtable).set_text.methodPtr)
                (pTVar3,(pTVar2->vector[(int)uVar1]->fields)._Name_k__BackingField,
                 (pTVar3->klass->vtable).set_text.method);
      pTVar2 = (this->fields).availableModes;
      pAVar5 = (this->fields).onChange;
      if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar1 = (this->fields).modeIndex;
        if ((uint)pTVar2->max_length <= uVar1) goto code_?;
        if ((pTVar2->vector[(int)uVar1] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pAVar5 != (Action_1_Int32_ *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pAVar5->fields)._._.invoke_impl)
                    ((pAVar5->fields)._._.method_code,
                     (pTVar2->vector[(int)uVar1]->fields)._Mode_k__BackingField,
                     (pAVar5->fields)._._.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ThemeFogTypeSelector() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector__ctor
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeFogTypeSelector__NamedFogMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeFogTypeSelector__NamedFogMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Heavy);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Light);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).modeIndex = -1;
  pTVar1 = (ThemeFogTypeSelector_NamedFogMode__Array *)
           FUN_?(TypeInfo__ThemeFogTypeSelector__NamedFogMode,2);
  lVar2 = FUN_?(TypeInfo__ThemeFogTypeSelector__NamedFogMode);
  if (lVar2 != 0) {
    bVar3 = iRam_? != 0;
    *(undefined4 *)(lVar2 + 0x10) = 2;
    *(String **)(lVar2 + 0x18) = StringLiteral_Light;
    if (bVar3) {
      uVar4 = (uint)(lVar2 + 0x18U >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
      lVar5 = FUN_?(lVar2,(pTVar1->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar8 = FUN_?();
        FUN_?(uVar8,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FUN_?(pTVar1,0,lVar2);
      lVar2 = FUN_?(TypeInfo__ThemeFogTypeSelector__NamedFogMode);
      if (lVar2 != 0) {
        bVar3 = iRam_? != 0;
        *(undefined4 *)(lVar2 + 0x10) = 3;
        *(String **)(lVar2 + 0x18) = StringLiteral_Heavy;
        if (bVar3) {
          uVar4 = (uint)(lVar2 + 0x18U >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        lVar5 = FUN_?(lVar2,(pTVar1->klass->_0).element_class);
        if (lVar5 == 0) {
          uVar8 = FUN_?();
          FUN_?(uVar8,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FUN_?(pTVar1,1,lVar2);
        bVar3 = iRam_? != 0;
        (this->fields).availableModes = pTVar1;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).availableModes >> 0xc);
          lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar7 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
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
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

