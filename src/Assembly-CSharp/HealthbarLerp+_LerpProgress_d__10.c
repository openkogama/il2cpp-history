
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  func_?();
  puVar11 = (undefined1 *)0xbc104275;
  if (bVar4) {
    bVar4 = CARRY1(*(byte *)&pHVar2->klass,extraout_AH);
    cVar12 = *(char *)&pHVar2->klass;
    bVar13 = *(char *)&pHVar2->klass + extraout_AH;
    *(byte *)&pHVar2->klass = bVar13 + bVar10;
    if ((!bVar4 && !CARRY1(bVar13,bVar10)) && *(char *)&pHVar2->klass != '\0') {
      *(char *)(unaff_EBX + 0x77) =
           *(char *)(unaff_EBX + 0x77) + extraout_DL + (bVar4 || CARRY1(bVar13,bVar10));
code_?:
      pcVar14 = (code *)swi(3);
      bVar15 = (*pcVar14)();
      return bVar15;
    }
    if ((SCARRY1(cVar12,extraout_AH) != SCARRY1(bVar13,bVar10)) != *(char *)&pHVar2->klass < '\0')
    goto code_?;
code_?:
    *(undefined2 *)(puVar11 + -4) = in_CS;
    puVar16 = puVar11 + -8;
    *(undefined **)(puVar11 + -8) = &UNK_?;
    func_?();
    *(Object_1__Class ***)(puVar16 + -4) = &TypeInfo__UnityEngine__Object;
    puVar17 = puVar16 + -8;
    *(undefined **)(puVar16 + -8) = &UNK_?;
    func_?();
    *(WaitForEndOfFrame__Class ***)(puVar17 + -4) = &TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar18 = puVar17 + -8;
    *(undefined **)(puVar17 + -8) = &UNK_?;
    func_?();
    puVar11 = puVar18 + 0xc;
    cRam_? = '\x01';
  }
  else {
    puVar1 = (undefined1 *)0xbc104275;
    if (cRam_? == '\0') {
      ppMRambc104271 =
           &
           AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
      ;
      puVar11 = (undefined1 *)0xbc10426d;
      puRam_? = &UNK_?;
      func_?();
      goto code_?;
    }
  }
  *(HealthbarLerp_LerpProgress_d_10 **)(puVar11 + -4) = pHVar2;
  *(HealthbarLerp **)(puVar11 + -8) = pHVar3;
  iVar19 = *(int *)(puVar1 + 8);
  iVar20 = *(int *)(iVar19 + 0x10);
  if (*(int *)(iVar19 + 8) == 0) {
    *(undefined4 *)(iVar19 + 8) = 0xffffffff;
    *(WaitForEndOfFrame__Class **)(puVar11 + -0xc) = TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar21 = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x10) = &UNK_?;
    uVar22 = func_?();
    *(undefined4 *)(puVar21 + -4) = 0;
    *(undefined4 *)(puVar21 + -8) = uVar22;
    *(undefined **)(puVar21 + -0xc) = &UNK_?;
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              (*(UxmlObjectListAttributeDescription_1_System_Object_ **)(puVar21 + -8),
               *(MethodInfo **)(puVar21 + -4));
    *(undefined4 *)(iVar19 + 0xc) = uVar22;
    *(undefined4 *)(puVar21 + -4) = uVar22;
    *(int *)(puVar21 + -8) = iVar19 + 0xc;
    *(undefined **)(puVar21 + -0xc) = &UNK_?;
    func_?();
    *(undefined4 *)(iVar19 + 8) = 1;
    return 1;
  }
  if (*(int *)(iVar19 + 8) == 1) {
    *(undefined4 *)(iVar19 + 8) = 0xffffffff;
    piVar23 = (int *)(puVar11 + -8);
    if ((iVar20 == 0) ||
       (iVar19 = *(int *)(iVar20 + 0x10), piVar23 = (int *)(puVar11 + -8), iVar19 == 0)) {
code_?:
      *(undefined **)((int)piVar23 + -4) = &UNK_?;
      func_?();
      pcVar14 = (code *)swi(3);
      bVar15 = (*pcVar14)();
      return bVar15;
    }
    *(MethodInfo **)(puVar11 + -0xc) =
         AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
    ;
    *(int *)(puVar11 + -0x10) = iVar19;
    *(undefined **)(puVar11 + -0x14) = &UNK_?;
    pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        (*(Component **)(puVar11 + -0x10),*(MethodInfo **)(puVar11 + -0xc));
    *(Object **)(puVar11 + -0xc) = pOVar5;
    *(Object **)(iVar20 + 0x40) = pOVar5;
    *(int *)(puVar11 + -0x10) = iVar20 + 0x40;
    puVar24 = puVar11 + -0x14;
    *(undefined **)(puVar11 + -0x14) = &UNK_?;
    func_?();
    piVar25 = (int *)(puVar24 + 0x10);
    uVar22 = *(undefined4 *)(iVar20 + 0x40);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      *(Object_1__Class **)(puVar24 + 0xc) = TypeInfo__UnityEngine__Object;
      puVar26 = puVar24 + 8;
      *(undefined **)(puVar24 + 8) = &UNK_?;
      func_?();
      piVar25 = (int *)(puVar26 + 4);
    }
    piVar25[-1] = 0;
    piVar25[-2] = 0;
    piVar25[-3] = uVar22;
    piVar25[-4] = (int)&UNK_?;
    bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)piVar25[-3],(Object_1 *)piVar25[-2],(MethodInfo *)piVar25[-1]);
    piVar23 = piVar25 + 3;
    if (bVar15 != 0) {
      iVar19 = *(int *)(iVar20 + 0x40);
      if (iVar19 == 0) goto code_?;
      piVar25[2] = 0;
      piVar25[1] = *(undefined4 *)(iVar20 + 0x4c);
      *piVar25 = iVar19;
      piVar25[-1] = (int)&UNK_?;
      AccessoryViewController::AccessoryViewController_OpenAccessoryManagementScreen
                ((AccessoryViewController *)*piVar25,(AccessoryDataClient *)piVar25[1],
                 (MethodInfo *)piVar25[2]);
      *(undefined4 *)(iVar20 + 0x4c) = 0;
      piVar25[2] = 0;
      piVar25[1] = iVar20 + 0x4c;
      *piVar25 = (int)&UNK_?;
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

