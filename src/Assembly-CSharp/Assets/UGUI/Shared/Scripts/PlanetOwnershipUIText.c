
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
  pbVar8 = (byte *)((int)uVar7 * 5 + 0x50);
  bVar9 = (byte)((ulonglong)uVar7 >> 0x28);
  bVar10 = *pbVar8 + bVar9;
  bVar11 = CARRY1(*pbVar8,bVar9) || CARRY1(bVar10,bVar6);
  *pbVar8 = bVar10 + bVar6;
  pSVar5 = pSVar1 + -8;
  bVar10 = (byte)((uint)unaff_EBX >> 8);
  bVar6 = *(char *)&pSVar5->klass + bVar10;
  bVar12 = CARRY1(*(byte *)&pSVar5->klass,bVar10) || CARRY1(bVar6,bVar11);
  *(byte *)&pSVar5->klass = bVar6 + bVar11;
  pbVar8 = (byte *)((int)((ulonglong)uVar7 >> 0x20) + -0x77efaf80);
  bVar6 = *pbVar8;
  bVar9 = (byte)((ulonglong)uVar7 >> 0x20);
  bVar10 = *pbVar8 + bVar9;
  *pbVar8 = bVar10 + bVar12;
  pcVar13 = (char *)((int)uVar7 + 0x10);
  *pcVar13 = *pcVar13 + 'U' + (CARRY1(bVar6,bVar9) || CARRY1(bVar10,bVar12));
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
  if (iRam_? == 0) {
    return;
  }
  method_00 = TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0;
  value = (Object *)
          func_?(TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0,
                          unaff_EDI,pSVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_02 = (Object__Class *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  GNU::Gettext::RecursiveTracer::RecursiveTracer__ctor((RecursiveTracer *)this_02,(MethodInfo *)0x0)
  ;
  if (value != (Object *)0x0) {
    value[1].klass = this_02;
    func_?(value + 1,this_02);
    if ((value[1].klass != (Object__Class *)0x0) &&
       (pSVar14 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar14 != (StringBuilder *)0x0))
    {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar14,pSRamffffff90,(MethodInfo *)0x0);
      if ((value[1].klass != (Object__Class *)0x0) &&
         (pSVar14 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar14 != (StringBuilder *)0x0
         )) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                  (pSVar14,(MethodInfo *)0x0);
        iVar4 = iRam_?;
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
                     iVar4,(((UnityAction_1_System_Object___Fields *)&this_03->fields)->_)._.method)
          ;
          uVar15 = 0;
          if (iVar4 != 0) {
            iVar16 = 0x10;
            while (iVar17 = *(int *)(iVar4 + 0xc), iVar17 != 0) {
              if (*(int *)(iVar17 + 0xc) <= (int)uVar15) {
                if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
                  pvVar18 = (doAfter->fields)._._.method_code;
                  (*(doAfter->fields)._._.invoke_impl)(pvVar18,iVar4,(doAfter->fields)._._.method);
                  if (*(RecursiveTracer **)((int)pvVar18 + 8) != (RecursiveTracer *)0x0) {
                    GNU::Gettext::RecursiveTracer::RecursiveTracer_SaveToFile
                              (*(RecursiveTracer **)((int)pvVar18 + 8),pSVar1,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              if (*(uint *)(iVar17 + 0xc) <= uVar15) goto code_?;
              if (*(int *)(iVar16 + iVar17) != 0) {
                GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
                          (*(PluralFormsNode **)(iVar16 + iVar17),doBefore,doAfter,(MethodInfo *)0x0)
                ;
              }
              uVar15 = uVar15 + 1;
              iVar16 = iVar16 + 4;
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

