
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__10::
     HealthbarLerp_LerpProgress_d_10_MoveNext
               (HealthbarLerp_LerpProgress_d_10 *this,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pHVar3 = this;
  pHVar4 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
  case 1:
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    bVar5 = pHVar4 == (HealthbarLerp *)0x0;
    if (!bVar5) {
      if ((float)this - (pHVar4->fields).lerpStart < (pHVar4->fields).lerpDelay) {
        this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pHVar3->fields).__2__current = pOVar6;
        func_?(&(pHVar3->fields).__2__current,pOVar6);
        (pHVar3->fields).__1__state = 1;
        return 1;
      }
      fVar7 = 0.0;
code_?:
      (pHVar3->fields)._progress_5__2 = fVar7;
      if (_UNK_? <= fVar7) {
code_?:
        this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32);
        (pHVar3->fields).__2__current = pOVar6;
        func_?(&(pHVar3->fields).__2__current,pOVar6);
        (pHVar3->fields).__1__state = 3;
        return 1;
      }
      pPVar8 = (pHVar4->fields).targetProgressBar;
      this_00 = (ProgressBarAndroid *)(pHVar4->fields).progressBar;
      bVar5 = pPVar8 == (ProgressBar *)0x0;
      if (!bVar5) {
        fVar7 = (pHVar3->fields)._progress_5__2;
        fVar9 = (pHVar4->fields).startProgress;
        if (fVar7 < 0.0) {
          fVar7 = 0.0;
        }
        else if (_UNK_? < fVar7) {
          fVar7 = _UNK_?;
        }
        bVar5 = this_00 == (ProgressBarAndroid *)0x0;
        if (!bVar5) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (this_00,((pPVar8->fields).progress - fVar9) * fVar7 + fVar9,(MethodInfo *)0x0)
          ;
          pPVar8 = (pHVar4->fields).progressBar;
          bVar5 = pPVar8 == (ProgressBar *)0x0;
          if (!bVar5) {
            pPVar10 = (pHVar4->fields).targetProgressBar;
            bVar5 = pPVar10 == (ProgressBar *)0x0;
            if (!bVar5) {
              if ((pPVar10->fields).progress < (pPVar8->fields).progress) {
                this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
                pOVar6 = (Object *)func_?(TypeInfo__System__Int32);
                (pHVar3->fields).__2__current = pOVar6;
                func_?(&(pHVar3->fields).__2__current,pOVar6);
                (pHVar3->fields).__1__state = 2;
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
    fVar7 = (this->fields)._progress_5__2;
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    bVar5 = pHVar4 == (HealthbarLerp *)0x0;
    if (!bVar5) {
      fVar7 = (float)this / (pHVar4->fields).lerpForSeconds + fVar7;
      goto code_?;
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  bVar11 = 0;
  uVar12 = func_?();
  if (bVar5) {
    puVar13 = (undefined4 *)((int)unaff_retaddr + -5);
    puVar14 = (undefined1 *)((int)unaff_retaddr + -5);
    puVar2 = (undefined1 *)((int)unaff_retaddr + -5);
    puVar1 = (undefined1 *)((int)unaff_retaddr + -5);
    *(undefined1 **)((int)unaff_retaddr + -5) = &stack0xfffffffc;
    if (cRam_? == '\0') goto code_?;
  }
  else {
    pbVar15 = (byte *)((int)unaff_retaddr + (int)pHVar3 * 2 + 0x42);
    bVar5 = CARRY1(*pbVar15,unaff_BL) || CARRY1(*pbVar15 + unaff_BL,bVar11);
    *pbVar15 = *pbVar15 + unaff_BL + bVar11;
    bVar16 = (byte)uVar12;
    bVar17 = (byte)((ulonglong)uVar12 >> 0x28);
    bVar11 = bVar17 + bVar16;
    cVar18 = bVar11 + bVar5;
    if (cVar18 == '\0') {
      vmwrite(*(undefined4 *)
               (extraout_ECX + 0x68287500 +
               CONCAT22((short)((ulonglong)uVar12 >> 0x30),
                        CONCAT11(cVar18,(char)((ulonglong)uVar12 >> 0x20)))),unaff_retaddr);
      if (SCARRY1(bVar17,bVar16) != SCARRY1(bVar11,bVar5)) {
        *(undefined4 *)uVar12 = *unaff_retaddr;
        *unaff_retaddr =
             &MethodInfo__HealthbarLerp___LerpProgress_d__10__System_Collections_IEnumerator_Reset__
        ;
        puVar19 = unaff_retaddr + -1;
        unaff_retaddr[-1] = &UNK_?;
        uVar20 = func_?();
        *(undefined4 *)((int)puVar19 + 0x10) = uVar20;
        *(HealthbarLerp_LerpProgress_d_10 **)((int)puVar19 + 0xc) = pHVar3;
        *(undefined **)((int)puVar19 + 8) = &UNK_?;
        func_?();
        pcVar21 = (code *)swi(3);
        bVar22 = (*pcVar21)();
        return bVar22;
      }
      *(undefined2 *)(unaff_retaddr + -1) = in_CS;
      puVar23 = unaff_retaddr + -2;
      unaff_retaddr[-2] = &UNK_?;
      func_?();
    }
    else {
      if ((byte)(unaff_BL + cVar18 + (CARRY1(bVar17,bVar16) || CARRY1(bVar11,bVar5))) == '\0') {
        pcVar21 = (code *)swi(3);
        bVar22 = (*pcVar21)();
        return bVar22;
      }
      in_stack_24 = in_stack_24 + cVar18;
      puVar13 = unaff_retaddr;
code_?:
      puVar13[-1] = &
                    AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
      ;
      puVar23 = puVar13 + -2;
      puVar13[-2] = &UNK_?;
      func_?();
      puVar2 = puVar1;
    }
    *(Object_1__Class ***)((int)puVar23 + -4) = &TypeInfo__UnityEngine__Object;
    puVar25 = (undefined1 *)((int)puVar23 + -8);
    *(undefined **)((int)puVar23 + -8) = &UNK_?;
    func_?();
    *(WaitForEndOfFrame__Class ***)(puVar25 + -4) = &TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar26 = puVar25 + -8;
    *(undefined **)(puVar25 + -8) = &UNK_?;
    func_?();
    puVar14 = puVar26 + 0xc;
    cRam_? = '\x01';
  }
  *(HealthbarLerp_LerpProgress_d_10 **)(puVar14 + -4) = pHVar3;
  *(HealthbarLerp **)(puVar14 + -8) = pHVar4;
  iVar27 = *(int *)(puVar2 + 8);
  iVar28 = *(int *)(iVar27 + 0x10);
  if (*(int *)(iVar27 + 8) == 0) {
    *(undefined4 *)(iVar27 + 8) = 0xffffffff;
    *(WaitForEndOfFrame__Class **)(puVar14 + -0xc) = TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar29 = puVar14 + -0x10;
    *(undefined **)(puVar14 + -0x10) = &UNK_?;
    uVar20 = func_?();
    *(undefined4 *)(puVar29 + -4) = 0;
    *(undefined4 *)(puVar29 + -8) = uVar20;
    *(undefined **)(puVar29 + -0xc) = &UNK_?;
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              (*(UxmlObjectListAttributeDescription_1_System_Object_ **)(puVar29 + -8),
               *(MethodInfo **)(puVar29 + -4));
    *(undefined4 *)(iVar27 + 0xc) = uVar20;
    *(undefined4 *)(puVar29 + -4) = uVar20;
    *(int *)(puVar29 + -8) = iVar27 + 0xc;
    *(undefined **)(puVar29 + -0xc) = &UNK_?;
    func_?();
    *(undefined4 *)(iVar27 + 8) = 1;
    return 1;
  }
  if (*(int *)(iVar27 + 8) == 1) {
    *(undefined4 *)(iVar27 + 8) = 0xffffffff;
    piVar30 = (int *)(puVar14 + -8);
    if ((iVar28 == 0) ||
       (iVar27 = *(int *)(iVar28 + 0x10), piVar30 = (int *)(puVar14 + -8), iVar27 == 0)) {
code_?:
      *(undefined **)((int)piVar30 + -4) = &UNK_?;
      func_?();
      pcVar21 = (code *)swi(3);
      bVar22 = (*pcVar21)();
      return bVar22;
    }
    *(MethodInfo **)(puVar14 + -0xc) =
         AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
    ;
    *(int *)(puVar14 + -0x10) = iVar27;
    *(undefined **)(puVar14 + -0x14) = &UNK_?;
    pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        (*(Component **)(puVar14 + -0x10),*(MethodInfo **)(puVar14 + -0xc));
    *(Object **)(puVar14 + -0xc) = pOVar6;
    *(Object **)(iVar28 + 0x40) = pOVar6;
    *(int *)(puVar14 + -0x10) = iVar28 + 0x40;
    puVar31 = puVar14 + -0x14;
    *(undefined **)(puVar14 + -0x14) = &UNK_?;
    func_?();
    piVar32 = (int *)(puVar31 + 0x10);
    uVar20 = *(undefined4 *)(iVar28 + 0x40);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      *(Object_1__Class **)(puVar31 + 0xc) = TypeInfo__UnityEngine__Object;
      puVar33 = puVar31 + 8;
      *(undefined **)(puVar31 + 8) = &UNK_?;
      func_?();
      piVar32 = (int *)(puVar33 + 4);
    }
    piVar32[-1] = 0;
    piVar32[-2] = 0;
    piVar32[-3] = uVar20;
    piVar32[-4] = (int)&UNK_?;
    bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)piVar32[-3],(Object_1 *)piVar32[-2],(MethodInfo *)piVar32[-1]);
    piVar30 = piVar32 + 3;
    if (bVar22 != 0) {
      iVar27 = *(int *)(iVar28 + 0x40);
      if (iVar27 == 0) goto code_?;
      piVar32[2] = 0;
      piVar32[1] = *(undefined4 *)(iVar28 + 0x4c);
      *piVar32 = iVar27;
      piVar32[-1] = (int)&UNK_?;
      AccessoryViewController::AccessoryViewController_OpenAccessoryManagementScreen
                ((AccessoryViewController *)*piVar32,(AccessoryDataClient *)piVar32[1],
                 (MethodInfo *)piVar32[2]);
      *(undefined4 *)(iVar28 + 0x4c) = 0;
      piVar32[2] = 0;
      piVar32[1] = iVar28 + 0x4c;
      *piVar32 = (int)&UNK_?;
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

