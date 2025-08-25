
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
  pMVar1 = unaff_ESI;
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    pIVar3 = unaff_ESI->klass;
    switch(PVar2 & 0xff) {
    case PlanetOwnershipType__Enum_Editor:
      key = StringLiteral_Editor;
      break;
    case PlanetOwnershipType__Enum_Owner:
      key = StringLiteral_Owner;
      break;
    case PlanetOwnershipType__Enum_Playtester:
      key = StringLiteral_Play_Tester;
      break;
    default:
      key = StringLiteral_error;
      break;
    case PlanetOwnershipType__Enum_Spectator:
      key = StringLiteral_Spectator;
    }
    pMVar4 = (MethodInfo *)TM::TM__(key,(MethodInfo *)0x0);
    pMVar1 = (MethodInfo *)0x0;
    unaff_EDI = unaff_ESI;
    if (pIVar3 != (Il2CppClass *)0x0) {
      method = pMVar4;
      (*(code *)pIVar3->image[0x12].name)();
      pMVar1 = (MethodInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)unaff_ESI,(MethodInfo *)0x0);
      pIVar3 = unaff_ESI->klass;
      if (((pIVar3 != (Il2CppClass *)0x0) &&
          (method = (MethodInfo *)pIVar3, iVar5 = (*(code *)pIVar3->image[0x11].token)(), iVar5 != 0
          )) && (pMVar1 != (MethodInfo *)0x0)) {
        pMVar4 = (MethodInfo *)0x0;
        if ((Transform__Class *)pMVar1->methodPointer ==
            (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pMVar4 = pMVar1;
        }
        uVar6 = 0;
        if (pMVar4 != (MethodInfo *)0x0) {
          pMVar4 = (MethodInfo *)0x0;
          if ((Transform__Class *)pMVar1->methodPointer ==
              (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pMVar4 = pMVar1;
          }
          method = (MethodInfo *)((float)*(int *)(iVar5 + 8) * _UNK_?);
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    ((RectTransform *)pMVar4,RectTransform_Axis__Enum_Horizontal,(float)method,
                     (MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  uVar6 = 0;
  func_?();
code_?:
  method = pMVar1;
  uVar7 = func_?();
  iVar5 = (int)uVar7;
  *(uint *)(iVar5 + 0x10) = ~*(uint *)(iVar5 + 0x10);
  do {
    *(uint *)(iVar5 + 0x10) = ~*(uint *)(iVar5 + 0x10);
    *(uint *)(iVar5 + 0x10) = ~*(uint *)(iVar5 + 0x10);
  } while ((bool)uVar6);
  *(char *)(iVar5 + -9) = *(char *)(iVar5 + -9) + extraout_CH;
  in((short)((uint6)uVar7 >> 0x20) + -1);
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
  if (*(int *)(iVar5 + 0xc) == 0) {
    return;
  }
  method_00 = TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0;
  value = (Object *)
          func_?(TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0,
                          unaff_EDI,&method);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_02 = (Object__Class *)func_?(TypeInfo__GNU__Gettext__RecursiveTracer);
  GNU::Gettext::RecursiveTracer::RecursiveTracer__ctor((RecursiveTracer *)this_02,(MethodInfo *)0x0)
  ;
  if (value != (Object *)0x0) {
    value[1].klass = this_02;
    func_?(value + 1,this_02);
    if ((value[1].klass != (Object__Class *)0x0) &&
       (pSVar8 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar8 != (StringBuilder *)0x0))
    {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar8,*(String **)(iVar5 + 0x10),(MethodInfo *)0x0);
      if ((value[1].klass != (Object__Class *)0x0) &&
         (pSVar8 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar8 != (StringBuilder *)0x0
         )) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                  (pSVar8,(MethodInfo *)0x0);
        iVar5 = *(int *)(iVar5 + 0xc);
        this_03 = (UnityAction_1_System_Object_ *)
                  func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        pUVar9 = this_03;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_03,value,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__0_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        doAfter = (PluralFormsNode_IterateNodesDelegate *)
                  func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate,
                                  pUVar9);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)doAfter,value,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        if (this_03 != (UnityAction_1_System_Object_ *)0x0) {
          (*(this_03->fields)._._.invoke_impl)
                    ((this_03->fields)._._.method_code,iVar5,(this_03->fields)._._.method);
          uVar10 = 0;
          if (iVar5 != 0) {
            iVar11 = 0x10;
            while (iVar12 = *(int *)(iVar5 + 0xc), iVar12 != 0) {
              if (*(int *)(iVar12 + 0xc) <= (int)uVar10) {
                if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
                  puVar13 = &UNK_?;
                  (*(doAfter->fields)._._.invoke_impl)((doAfter->fields)._._.method_code,iVar5);
                  if (*(RecursiveTracer **)(puVar13 + 8) != (RecursiveTracer *)0x0) {
                    GNU::Gettext::RecursiveTracer::RecursiveTracer_SaveToFile
                              (*(RecursiveTracer **)(puVar13 + 8),(String *)method,(MethodInfo *)0x0
                              );
                    return;
                  }
                }
                break;
              }
              if (*(uint *)(iVar12 + 0xc) <= uVar10) goto code_?;
              if (*(int *)(iVar11 + iVar12) != 0) {
                GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
                          (*(PluralFormsNode **)(iVar11 + iVar12),
                           (PluralFormsNode_IterateNodesDelegate *)0x0,doAfter,(MethodInfo *)0x0);
              }
              uVar10 = uVar10 + 1;
              iVar11 = iVar11 + 4;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

