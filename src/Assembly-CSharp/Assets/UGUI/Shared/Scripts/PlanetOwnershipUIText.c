
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  pTVar1 = unaff_ESI;
  if ((this_01 != (MVNetworkGame *)0x0) &&
     (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     this_02 != (MVLocalPlayer *)0x0)) {
    PVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_02,(MethodInfo *)0x0);
    pMVar3 = unaff_ESI[1].monitor;
    switch(PVar2 & 0xff) {
    case PlanetOwnershipType__Enum_Editor:
      pSVar4 = StringLiteral_Editor;
      break;
    case PlanetOwnershipType__Enum_Owner:
      pSVar4 = StringLiteral_Owner;
      break;
    case PlanetOwnershipType__Enum_Playtester:
      pSVar4 = StringLiteral_Play_Tester;
      break;
    default:
      pSVar4 = StringLiteral_error;
      break;
    case PlanetOwnershipType__Enum_Spectator:
      pSVar4 = StringLiteral_Spectator;
    }
    TM::TM__(pSVar4,(MethodInfo *)0x0);
    pTVar1 = (Transform *)0x0;
    unaff_EDI = unaff_ESI;
    if (pMVar3 != (MonitorData *)0x0) {
      (**(code **)(*(int *)pMVar3 + 0x318))();
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)unaff_ESI,(MethodInfo *)0x0);
      if (((unaff_ESI[1].monitor != (MonitorData *)0x0) &&
          (iVar5 = (**(code **)(*(int *)unaff_ESI[1].monitor + 0x310))(), iVar5 != 0)) &&
         (pTVar1 != (Transform *)0x0)) {
        pTVar6 = (Transform *)0x0;
        if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar6 = pTVar1;
        }
        if (pTVar6 != (Transform *)0x0) {
          pTVar6 = (Transform *)0x0;
          if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar6 = pTVar1;
          }
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    ((RectTransform *)pTVar6,RectTransform_Axis__Enum_Horizontal,
                     (float)*(int *)(iVar5 + 8) * _UNK_?,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  *(char *)&pTVar1->klass = *(char *)&pTVar1->klass + unaff_BL;
  in(extraout_DX);
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
  if (_UNK_? == 0) {
    return;
  }
  method_00 = TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0;
  value = (Object *)
          func_?(TypeInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0,
                          unaff_EDI,pTVar1);
  pOVar7 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_03 = (Object__Class *)
            func_?(TypeInfo__GNU__Gettext__RecursiveTracer,method_00,pOVar7);
  GNU::Gettext::RecursiveTracer::RecursiveTracer__ctor((RecursiveTracer *)this_03,(MethodInfo *)0x0)
  ;
  if (value != (Object *)0x0) {
    value[1].klass = this_03;
    func_?(value + 1);
    if ((value[1].klass != (Object__Class *)0x0) &&
       (pSVar8 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar8 != (StringBuilder *)0x0))
    {
      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                (pSVar8,_UNK_?,(MethodInfo *)0x0);
      if ((value[1].klass != (Object__Class *)0x0) &&
         (pSVar8 = (StringBuilder *)((value[1].klass)->_0).namespaze, pSVar8 != (StringBuilder *)0x0
         )) {
        mscorlib.dll::System::Text::StringBuilder::StringBuilder_AppendLine
                  (pSVar8,(MethodInfo *)0x0);
        iVar5 = _UNK_?;
        this_04 = (UnityAction_1_System_Object_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor(this_04,value,this_04,(MethodInfo *)0x0);
        doAfter = (PluralFormsNode_IterateNodesDelegate *)
                  func_?(TypeInfo__GNU__Gettext__PluralFormsNode__IterateNodesDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)doAfter,value,
                   MethodInfo__GNU__Gettext__PluralFormsCalculator____c__DisplayClass9_0___DumpNodes_b__1_GNU__Gettext__PluralFormsNode_
                   ,(MethodInfo *)0x0);
        if (this_04 != (UnityAction_1_System_Object_ *)0x0) {
          doBefore = (this_04->fields)._._.method_code;
          node = (PluralFormsNode *)&UNK_?;
          (*(this_04->fields)._._.invoke_impl)(doBefore,iVar5);
          uVar9 = 0;
          if (iVar5 != 0) {
            iVar10 = 0x10;
            while (iVar11 = *(int *)(iVar5 + 0xc), iVar11 != 0) {
              if (*(int *)(iVar11 + 0xc) <= (int)uVar9) {
                if (doAfter != (PluralFormsNode_IterateNodesDelegate *)0x0) {
                  pSVar4 = (doAfter->fields)._._.method;
                  (*(doAfter->fields)._._.invoke_impl)();
                  this_00 = (RecursiveTracer *)(node->fields).token;
                  if (this_00 != (RecursiveTracer *)0x0) {
                    GNU::Gettext::RecursiveTracer::RecursiveTracer_SaveToFile
                              (this_00,pSVar4,(MethodInfo *)0x0);
                    return;
                  }
                }
                break;
              }
              if (*(uint *)(iVar11 + 0xc) <= uVar9) goto code_?;
              if (*(int *)(iVar10 + iVar11) != 0) {
                node = *(PluralFormsNode **)(iVar10 + iVar11);
                GNU::Gettext::PluralFormsNode::PluralFormsNode_IterateNodes
                          (node,doBefore,doAfter,(MethodInfo *)0x0);
              }
              uVar9 = uVar9 + 1;
              iVar10 = iVar10 + 4;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

