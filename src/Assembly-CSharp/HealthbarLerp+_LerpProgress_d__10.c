
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__10::
     HealthbarLerp_LerpProgress_d_10_MoveNext
               (HealthbarLerp_LerpProgress_d_10 *this,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pHVar2 = this;
  pHVar3 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
  case 1:
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    bVar4 = pHVar3 == (HealthbarLerp *)0x0;
    if (!bVar4) {
      if ((float)this - (pHVar3->fields).lerpStart < (pHVar3->fields).lerpDelay) {
        this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
        pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pHVar2->fields).__2__current = pOVar5;
        func_?(&(pHVar2->fields).__2__current,pOVar5);
        (pHVar2->fields).__1__state = 1;
        return 1;
      }
      fVar6 = 0.0;
code_?:
      (pHVar2->fields)._progress_5__2 = fVar6;
      if (_UNK_? <= fVar6) {
code_?:
        this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
        pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
        (pHVar2->fields).__2__current = pOVar5;
        func_?(&(pHVar2->fields).__2__current,pOVar5);
        (pHVar2->fields).__1__state = 3;
        return 1;
      }
      pPVar7 = (pHVar3->fields).targetProgressBar;
      this_00 = (ProgressBarAndroid *)(pHVar3->fields).progressBar;
      bVar4 = pPVar7 == (ProgressBar *)0x0;
      if (!bVar4) {
        fVar6 = (pHVar2->fields)._progress_5__2;
        fVar8 = (pHVar3->fields).startProgress;
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (_UNK_? < fVar6) {
          fVar6 = _UNK_?;
        }
        bVar4 = this_00 == (ProgressBarAndroid *)0x0;
        if (!bVar4) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (this_00,((pPVar7->fields).progress - fVar8) * fVar6 + fVar8,(MethodInfo *)0x0)
          ;
          pPVar7 = (pHVar3->fields).progressBar;
          bVar4 = pPVar7 == (ProgressBar *)0x0;
          if (!bVar4) {
            pPVar9 = (pHVar3->fields).targetProgressBar;
            bVar4 = pPVar9 == (ProgressBar *)0x0;
            if (!bVar4) {
              if ((pPVar9->fields).progress < (pPVar7->fields).progress) {
                this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
                pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
                (pHVar2->fields).__2__current = pOVar5;
                func_?(&(pHVar2->fields).__2__current,pOVar5);
                (pHVar2->fields).__1__state = 2;
                return 1;
              }
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case 2:
    fVar6 = (this->fields)._progress_5__2;
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    bVar4 = pHVar3 == (HealthbarLerp *)0x0;
    if (!bVar4) {
      fVar6 = (float)this / (pHVar3->fields).lerpForSeconds + fVar6;
      goto code_?;
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  bVar10 = 0;
  uVar11 = func_?();
  piVar12 = (int *)uVar11;
  puVar13 = (undefined1 *)0xbc104275;
  if (bVar4) {
    bVar14 = (byte)((uint6)uVar11 >> 8);
    bVar4 = CARRY1(*(byte *)&pHVar2->klass,bVar14);
    bVar14 = *(char *)&pHVar2->klass + bVar14;
    bVar15 = bVar4 || CARRY1(bVar14,bVar10);
    *(byte *)&pHVar2->klass = bVar14 + bVar10;
    if ((!bVar4 && !CARRY1(bVar14,bVar10)) && *(char *)&pHVar2->klass != '\0') {
      *(char *)(unaff_EBX + 0x77) =
           *(char *)(unaff_EBX + 0x77) + (char)((uint6)uVar11 >> 0x20) + bVar15;
      pcVar16 = (code *)swi(3);
      bVar17 = (*pcVar16)();
      return bVar17;
    }
    out((short)((uint6)uVar11 >> 0x20),piVar12);
    puVar13 = (undefined1 *)0xbc104271;
    pHRambc104271 = pHVar2;
    *(undefined1 *)&pHVar3->klass = *(undefined1 *)&pHVar2->klass;
    *piVar12 = (int)piVar12 + (uint)bVar15 + *piVar12;
    bVar4 = *piVar12 == 0;
    pHVar2 = (HealthbarLerp_LerpProgress_d_10 *)((int)&pHVar2->klass + 1);
    pHVar3 = (HealthbarLerp *)((int)&pHVar3->klass + 1);
  }
  else {
    puVar1 = (undefined1 *)0xbc104275;
    bVar4 = cRam_? == '\0';
  }
  if (bVar4) {
    *(MethodInfo ***)(puVar13 + -4) =
         &
         AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
    ;
    puVar18 = puVar13 + -8;
    *(undefined **)(puVar13 + -8) = &UNK_?;
    func_?();
    *(Object_1__Class ***)(puVar18 + -4) = &TypeInfo__UnityEngine__Object;
    puVar19 = puVar18 + -8;
    *(undefined **)(puVar18 + -8) = &UNK_?;
    func_?();
    *(WaitForEndOfFrame__Class ***)(puVar19 + -4) = &TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar20 = puVar19 + -8;
    *(undefined **)(puVar19 + -8) = &UNK_?;
    func_?();
    puVar13 = puVar20 + 0xc;
    cRam_? = '\x01';
  }
  *(HealthbarLerp_LerpProgress_d_10 **)(puVar13 + -4) = pHVar2;
  *(HealthbarLerp **)(puVar13 + -8) = pHVar3;
  iVar21 = *(int *)(puVar1 + 8);
  iVar22 = *(int *)(iVar21 + 0x10);
  if (*(int *)(iVar21 + 8) == 0) {
    *(undefined4 *)(iVar21 + 8) = 0xffffffff;
    *(WaitForEndOfFrame__Class **)(puVar13 + -0xc) = TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar23 = puVar13 + -0x10;
    *(undefined **)(puVar13 + -0x10) = &UNK_?;
    uVar24 = func_?();
    *(undefined4 *)(puVar23 + -4) = 0;
    *(undefined4 *)(puVar23 + -8) = uVar24;
    *(undefined **)(puVar23 + -0xc) = &UNK_?;
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              (*(UxmlObjectListAttributeDescription_1_System_Object_ **)(puVar23 + -8),
               *(MethodInfo **)(puVar23 + -4));
    *(undefined4 *)(iVar21 + 0xc) = uVar24;
    *(undefined4 *)(puVar23 + -4) = uVar24;
    *(int *)(puVar23 + -8) = iVar21 + 0xc;
    *(undefined **)(puVar23 + -0xc) = &UNK_?;
    func_?();
    *(undefined4 *)(iVar21 + 8) = 1;
    return 1;
  }
  if (*(int *)(iVar21 + 8) == 1) {
    *(undefined4 *)(iVar21 + 8) = 0xffffffff;
    piVar12 = (int *)(puVar13 + -8);
    if ((iVar22 == 0) ||
       (iVar21 = *(int *)(iVar22 + 0x10), piVar12 = (int *)(puVar13 + -8), iVar21 == 0)) {
code_?:
      *(undefined **)((int)piVar12 + -4) = &UNK_?;
      func_?();
      pcVar16 = (code *)swi(3);
      bVar17 = (*pcVar16)();
      return bVar17;
    }
    *(MethodInfo **)(puVar13 + -0xc) =
         AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
    ;
    *(int *)(puVar13 + -0x10) = iVar21;
    *(undefined **)(puVar13 + -0x14) = &UNK_?;
    pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       (*(Component **)(puVar13 + -0x10),*(MethodInfo **)(puVar13 + -0xc));
    *(Object **)(puVar13 + -0xc) = pOVar5;
    *(Object **)(iVar22 + 0x40) = pOVar5;
    *(int *)(puVar13 + -0x10) = iVar22 + 0x40;
    puVar25 = puVar13 + -0x14;
    *(undefined **)(puVar13 + -0x14) = &UNK_?;
    func_?();
    piVar26 = (int *)(puVar25 + 0x10);
    uVar24 = *(undefined4 *)(iVar22 + 0x40);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      *(Object_1__Class **)(puVar25 + 0xc) = TypeInfo__UnityEngine__Object;
      puVar27 = puVar25 + 8;
      *(undefined **)(puVar25 + 8) = &UNK_?;
      func_?();
      piVar26 = (int *)(puVar27 + 4);
    }
    piVar26[-1] = 0;
    piVar26[-2] = 0;
    piVar26[-3] = uVar24;
    piVar26[-4] = (int)&UNK_?;
    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)piVar26[-3],(Object_1 *)piVar26[-2],(MethodInfo *)piVar26[-1]);
    piVar12 = piVar26 + 3;
    if (bVar17 != 0) {
      iVar21 = *(int *)(iVar22 + 0x40);
      if (iVar21 == 0) goto code_?;
      piVar26[2] = 0;
      piVar26[1] = *(undefined4 *)(iVar22 + 0x4c);
      *piVar26 = iVar21;
      piVar26[-1] = (int)&UNK_?;
      AccessoryViewController::AccessoryViewController_OpenAccessoryManagementScreen
                ((AccessoryViewController *)*piVar26,(AccessoryDataClient *)piVar26[1],
                 (MethodInfo *)piVar26[2]);
      *(undefined4 *)(iVar22 + 0x4c) = 0;
      piVar26[2] = 0;
      piVar26[1] = iVar22 + 0x4c;
      *piVar26 = (int)&UNK_?;
      func_?();
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__10::
     HealthbarLerp_LerpProgress_d_10_System_Collections_IEnumerator_Reset
               (HealthbarLerp_LerpProgress_d_10 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__HealthbarLerp___LerpProgress_d__10__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

