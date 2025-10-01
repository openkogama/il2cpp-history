
/* Void Awake() */

void Assembly-CSharp.dll::Assets::UGUI::Shared::Scripts::PlanetOwnershipUIText::
     PlanetOwnershipUIText_Awake(PlanetOwnershipUIText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&StringLiteral_Editor);
    func_?(&StringLiteral_Play_Tester);
    func_?(&StringLiteral_Owner);
    func_?(&StringLiteral_Spectator);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  pSVar1 = unaff_ESI;
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    pSVar3 = unaff_ESI[1].klass;
    switch(PVar2 & 0xff) {
    case PlanetOwnershipType__Enum_Editor:
      pSVar1 = StringLiteral_Editor;
      break;
    case PlanetOwnershipType__Enum_Owner:
      pSVar1 = StringLiteral_Owner;
      break;
    case PlanetOwnershipType__Enum_Playtester:
      pSVar1 = StringLiteral_Play_Tester;
      break;
    default:
      pSVar1 = StringLiteral_error;
      break;
    case PlanetOwnershipType__Enum_Spectator:
      pSVar1 = StringLiteral_Spectator;
    }
    TM::TM__(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (String *)0x0;
    unaff_EDI = unaff_ESI;
    if (pSVar3 != (String__Class *)0x0) {
      (*(code *)(pSVar3->_0).image[0x12].name)();
      pSVar1 = (String *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)unaff_ESI,(MethodInfo *)0x0);
      if (((unaff_ESI[1].klass != (String__Class *)0x0) &&
          (iVar4 = (*(code *)((unaff_ESI[1].klass)->_0).image[0x11].token)(), iVar4 != 0)) &&
         (pSVar1 != (String *)0x0)) {
        pSVar5 = (String *)0x0;
        if (pSVar1->klass == (String__Class *)TypeInfo__UnityEngine__RectTransform) {
          pSVar5 = pSVar1;
        }
        bVar6 = 0;
        if (pSVar5 != (String *)0x0) {
          pSVar5 = (String *)0x0;
          if (pSVar1->klass == (String__Class *)TypeInfo__UnityEngine__RectTransform) {
            pSVar5 = pSVar1;
          }
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    ((RectTransform *)pSVar5,RectTransform_Axis__Enum_Horizontal,
                     (float)*(int *)(iVar4 + 8) * _UNK_?,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  bVar6 = 0;
  func_?();
code_?:
  uVar7 = func_?();
  pbVar8 = (byte *)((ulonglong)uVar7 >> 0x20);
  bVar9 = *(byte *)&pSVar1->klass;
  iVar4 = CONCAT31((int3)((ulonglong)uVar7 >> 8),bVar9);
  pbVar10 = (byte *)((int)&stack0xfffffffc * 4 + -0x52f1efb0);
  bVar11 = CARRY1(*pbVar10,bVar9) || CARRY1(*pbVar10 + bVar9,bVar6);
  *pbVar10 = *pbVar10 + bVar9 + bVar6;
  bVar6 = *pbVar8;
  bVar12 = (byte)((ulonglong)uVar7 >> 8);
  bVar9 = *pbVar8 + bVar12;
  *pbVar8 = bVar9 + bVar11;
  pcVar13 = *(char **)((int)&pSVar1->klass + 1);
  *pcVar13 = *pcVar13 + unaff_BL + (CARRY1(bVar6,bVar12) || CARRY1(bVar9,bVar11));
  in((short)((ulonglong)uVar7 >> 0x20));
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
    func_?(&TypeInfo__GNU__Gettext__RecursiveTracer);
    func_?(&
                    MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                   );
    func_?(&
                    MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                   );
    func_?(&TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0);
    cRam_? = '\x01';
  }
  if (*(int *)(iVar4 + 0xc) == 0) {
    return;
  }
  method_00 = TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0;
  value = (Object *)
          func_?(TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0,
                          unaff_EDI,(undefined1 *)((int)&(pSVar1->fields)._stringLength + 1));
  pOVar14 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_02 = (Object__Class *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  GNU::Gettext::RecursiveTracer::RecursiveTracer__ctor((RecursiveTracer *)this_02,(MethodInfo *)0x0)
  ;
  if (value != (Object *)0x0) {
    value[1].klass = this_02;
    func_?(value + 1,this_02,pOVar14);
    if ((value[1].klass != (Object__Class *)0x0) &&
       (pSVar15 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar15 != (StringBuilder *)0x0))
    {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar15,*(String **)(iVar4 + 0x10),(MethodInfo *)0x0);
      if ((value[1].klass != (Object__Class *)0x0) &&
         (pSVar15 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar15 != (StringBuilder *)0x0
         )) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                  (pSVar15,(MethodInfo *)0x0);
        iVar4 = *(int *)(iVar4 + 0xc);
        this_03 = (PluralFormsNode_IterateNodesDelegate *)
                  func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        doBefore = this_03;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_03,value,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        doAfter = (PluralFormsNode_IterateNodesDelegate *)
                  func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)doAfter,value,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        if (this_03 != (PluralFormsNode_IterateNodesDelegate *)0x0) {
          (*(((UnityAction_1_System_Object___Fields *)&this_03->fields)->_)._.invoke_impl)
                    ((((UnityAction_1_System_Object___Fields *)&this_03->fields)->_)._.method_code,
                     iVar4,(((UnityAction_1_System_Object___Fields *)&this_03->fields)->_)._.method
                    );
          uVar16 = 0;
          if (iVar4 != 0) {
            iVar17 = 0x10;
            while (iVar18 = *(int *)(iVar4 + 0xc), iVar18 != 0) {
              if (*(int *)(iVar18 + 0xc) <= (int)uVar16) {
                if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
                  (*(doAfter->fields)._._.invoke_impl)
                            ((doAfter->fields)._._.method_code,iVar4,(doAfter->fields)._._.method);
                  if (*(RecursiveTracer **)(iVar4 + 8) != (RecursiveTracer *)0x0) {
                    GNU::Gettext::RecursiveTracer::RecursiveTracer_SaveToFile
                              (*(RecursiveTracer **)(iVar4 + 8),pSVar1,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              if (*(uint *)(iVar18 + 0xc) <= uVar16) goto code_?;
              if (*(int *)(iVar17 + iVar18) != 0) {
                GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
                          (*(PluralFormsNode **)(iVar17 + iVar18),doBefore,doAfter,(MethodInfo *)0x0)
                ;
              }
              uVar16 = uVar16 + 1;
              iVar17 = iVar17 + 4;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

