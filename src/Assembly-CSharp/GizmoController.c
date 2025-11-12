
/* Void Handle(GizmoAction) */

void Assembly-CSharp.dll::GizmoController::GizmoController_Handle
               (GizmoController *this,GizmoAction__Enum action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RotationMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TranslateMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_moveWithAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rotationDegreesStep);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rotationMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_translateMode);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  switch(action) {
  case GizmoAction__Enum_None:
    goto code_?;
  case GizmoAction__Enum_Rotate:
    iVar2 = 1;
    pGVar3 = (this->fields).gizmoMenuInstance;
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
    if (pGVar3 != (GizmoMenu *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pGVar3 = (this->fields).gizmoMenuInstance;
        if (pGVar3 == (GizmoMenu *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pGVar3->fields).rotationMode.hasValue != 0) {
          iVar2 = (pGVar3->fields).rotationMode.value;
        }
      }
    }
    pGVar4 = (this->fields).gizmoMenuNgInstance;
    if (pGVar4 == (GizmoMenuNg *)0x0) goto code_?;
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop(pGVar4,(MethodInfo *)0x0);
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    pDVar6 = (pEVar5->fields)._.data;
    aiStackX_10[0] = 0x41700000;
    pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    uVar8 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,(Object *)StringLiteral_rotationDegreesStep,pOVar7,
               (InsertionBehavior__Enum)uVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    pDVar6 = (pEVar5->fields)._.data;
    aiStackX_10[0] = iVar2;
    pOVar7 = (Object *)FUN_?(TypeInfo__RotationMode,aiStackX_10);
    if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,(Object *)StringLiteral_rotationMode,pOVar7,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    if ((pEVar5->fields)._.lockState == 0) {
      FSMEntity::FSMEntity_PushState_1
                ((FSMEntity *)pEVar5,EditorEvent__Enum_Rotating,EditorEvent__Enum_UndefinedState,
                 (MethodInfo *)0x0);
    }
    goto code_?;
  case GizmoAction__Enum_RotateStepX:
    pRVar9 = (this->fields).rotationHelper;
    if (pRVar9 == (RotationHelper *)0x0) goto code_?;
    rotationMode = RotationMode__Enum_X;
    break;
  case GizmoAction__Enum_RotateStepY:
    pRVar9 = (this->fields).rotationHelper;
    if (pRVar9 == (RotationHelper *)0x0) goto code_?;
    rotationMode = RotationMode__Enum_Y;
    break;
  case GizmoAction__Enum_RotateStepZ:
    pRVar9 = (this->fields).rotationHelper;
    goto joined_?;
  case GizmoAction__Enum_ResetRotation:
    pRVar9 = (this->fields).rotationHelper;
    if (pRVar9 == (RotationHelper *)0x0) goto code_?;
    UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ResetRotation
              (pRVar9,(MethodInfo *)0x0);
    goto code_?;
  case GizmoAction__Enum_TranslateXZ:
    pGVar4 = (this->fields).gizmoMenuNgInstance;
    if (pGVar4 == (GizmoMenuNg *)0x0) goto code_?;
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop(pGVar4,(MethodInfo *)0x0);
    pTVar10 = TypeInfo__TranslateMode;
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    pOVar7 = (Object *)0x0;
    pDVar6 = (pEVar5->fields)._.data;
    uStackX_20 = 0;
    iVar11._0_2_ = (TypeInfo__TranslateMode->_0).byval_arg.attrs;
    iVar11._2_1_ = (TypeInfo__TranslateMode->_0).byval_arg.type;
    iVar11._3_1_ = (TypeInfo__TranslateMode->_0).byval_arg.field_0xb;
    if (iVar11 < 0) {
      if (((TypeInfo__TranslateMode->_0).generic_class == (Il2CppGenericClass *)0x0) ||
         (((TypeInfo__TranslateMode->_1).field_0x6d & 8) == 0)) {
        pOVar7 = (Object *)FUN_?(TypeInfo__TranslateMode);
        FUN_?(pOVar7 + 1,&uStackX_20,(longlong)(int)(pTVar10->_1).instance_size + -0x10);
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
          uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
            puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
            LOCK();
            bVar16 = uVar14 == *puVar15;
            if (bVar16) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar16);
        }
      }
    }
    else {
      pOVar7 = (Object *)((ulonglong)uStackX_24 << 0x20);
    }
    if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    uVar8 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,(Object *)StringLiteral_translateMode,pOVar7,(InsertionBehavior__Enum)uVar8,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    pDVar6 = (pEVar5->fields)._.data;
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,1);
    pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                ->klass->rgctx_data[0x22].method;
    key = StringLiteral_moveWithAvatar;
    goto code_?;
  case GizmoAction__Enum_TranslateY:
    pGVar4 = (this->fields).gizmoMenuNgInstance;
    if (pGVar4 == (GizmoMenuNg *)0x0) goto code_?;
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop(pGVar4,(MethodInfo *)0x0);
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    pDVar6 = (pEVar5->fields)._.data;
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,1);
    pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    uVar8 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,(Object *)StringLiteral_moveWithAvatar,pOVar7,(InsertionBehavior__Enum)uVar8
               ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                ->klass->rgctx_data[0x22].method);
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    pDVar6 = (pEVar5->fields)._.data;
    aiStackX_10[0] = 2;
    pOVar7 = (Object *)FUN_?(TypeInfo__TranslateMode,aiStackX_10);
    if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                ->klass->rgctx_data[0x22].method;
    key = StringLiteral_translateMode;
code_?:
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar6,(Object *)key,pOVar7,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),method_00);
    pEVar5 = (this->fields).editorStateMachine;
    if (pEVar5 == (EditorStateMachine *)0x0) goto code_?;
    if ((pEVar5->fields)._.lockState == 0) {
      FSMEntity::FSMEntity_PushState_1
                ((FSMEntity *)pEVar5,EditorEvent__Enum_ESTranslate,EditorEvent__Enum_UndefinedState,
                 (MethodInfo *)0x0);
    }
    goto code_?;
  case GizmoAction__Enum_FlipX:
    pRVar9 = (this->fields).rotationHelper;
    if (pRVar9 == (RotationHelper *)0x0) goto code_?;
    rotationMode = RotationMode__Enum_X;
    fVar1 = _UNK_?;
    break;
  case GizmoAction__Enum_FlipY:
    pRVar9 = (this->fields).rotationHelper;
    if (pRVar9 == (RotationHelper *)0x0) goto code_?;
    rotationMode = RotationMode__Enum_Y;
    fVar1 = _UNK_?;
    break;
  case GizmoAction__Enum_FlipZ:
    pRVar9 = (this->fields).rotationHelper;
    fVar1 = _UNK_?;
    goto joined_?;
  case GizmoAction__Enum_RotateStepXRight:
    pRVar9 = (this->fields).rotationHelper;
    if (pRVar9 == (RotationHelper *)0x0) goto code_?;
    rotationMode = RotationMode__Enum_X;
    fVar1 = _UNK_?;
    break;
  case GizmoAction__Enum_RotateStepYRight:
    pRVar9 = (this->fields).rotationHelper;
    if (pRVar9 == (RotationHelper *)0x0) goto code_?;
    rotationMode = RotationMode__Enum_Y;
    fVar1 = _UNK_?;
    break;
  case GizmoAction__Enum_RotateStepZRight:
    pRVar9 = (this->fields).rotationHelper;
    fVar1 = _UNK_?;
joined_?:
    if (pRVar9 == (RotationHelper *)0x0) {
code_?:
      FUN_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    rotationMode = RotationMode__Enum_Z;
    break;
  default:
    goto DAT_?;
  }
  UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_RotateStep
            (pRVar9,rotationMode,fVar1,(MethodInfo *)0x0);
code_?:
DAT_?:
  return;
}


/* Void Hide() */

void Assembly-CSharp.dll::GizmoController::GizmoController_Hide
               (GizmoController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gizmoMenuNgInstance;
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
  if (pGVar1 != (GizmoMenuNg *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).gizmoMenuNgInstance;
      if (pGVar1 == (GizmoMenuNg *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
                (pGVar1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void IGizmoHandler.IgnoreSelectionOnce() */

void Assembly-CSharp.dll::GizmoController::GizmoController_IGizmoHandler_IgnoreSelectionOnce
               (GizmoController *this,MethodInfo *method)

{
  (this->fields).ignoreSelectionOnce = 1;
  return;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::GizmoController::GizmoController_Initialize
               (GizmoController *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__RotationHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).editorStateMachine = esm;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pEVar6 = (this->fields).editorStateMachine;
  pRVar7 = (RotationHelper *)
           FUN_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__RotationHelper);
  iVar8 = iRam_?;
  (pRVar7->fields).editorStateMachine = pEVar6;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&pRVar7->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).rotationHelper = pRVar7;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).rotationHelper >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void Show(Int32, Vector3, EditorStateMachine) */

void Assembly-CSharp.dll::GizmoController::GizmoController_Show
               (GizmoController *this,int32_t id,Vector3 *worldPosition,EditorStateMachine *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoController___Show_b__11_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg>_UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GizmoController____c___Show_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GizmoController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gizmoMenuNgPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GizmoMenuNg *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pGVar1,
                       UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg>_UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg_
                      );
  (this->fields).gizmoMenuNgInstance = pGVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).gizmoMenuNgInstance >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pGVar1 = (this->fields).gizmoMenuNgInstance;
  if (pGVar1 == (GizmoMenuNg *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (pGVar1->fields).woID = id;
  (pGVar1->fields).editorStateMachine = e;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(pGVar1->fields).editorStateMachine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  fVar9 = worldPosition->y;
  fVar10 = worldPosition->z;
  (pGVar1->fields).worldPosition.x = worldPosition->x;
  (pGVar1->fields).worldPosition.y = fVar9;
  (pGVar1->fields).worldPosition.z = fVar10;
  UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Setup(pGVar1,(MethodInfo *)0x0)
  ;
  UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_SetToScreenPoint
            (pGVar1,(MethodInfo *)0x0);
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GizmoController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GizmoController____c);
  }
  this_01 = TypeInfo__GizmoController____c->static_fields->__9__11_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GizmoController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GizmoController____c);
    }
    object = TypeInfo__GizmoController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GizmoController____c___Show_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoController____c->static_fields->__9__11_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GizmoController____c->static_fields->__9__11_0 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar11,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__GizmoController___Show_b__11_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar12 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar12);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar11,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar3 = (longlong)(pLVar13->fields)._size;
    uVar2 = 0;
    if (0 < lVar3) {
      lVar14 = 0;
      lVar15 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar13->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar16 = (pLVar13->fields)._items;
        if (pTVar16 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar16->max_length <= uVar2) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar16->vector + lVar15 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar11,(BaseEventData *)0x0,this_02,
                            (pMVar12->field7_0x38).rgctx_data[1].method);
        if (bVar17 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar14 = lVar14 + 1;
        lVar15 = lVar15 + 8;
      } while (lVar14 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <Show>b__11_1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GizmoController::GizmoController__Show_b__11_1
               (GizmoController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GizmoController__OnGizmoMenuPop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gizmoMenuNgInstance;
  if (this_00 != (GizmoMenuNg *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GizmoController__OnGizmoMenuPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean get_IgnoreSelectionOnce() */

bool Assembly-CSharp.dll::GizmoController::GizmoController_get_IgnoreSelectionOnce
               (GizmoController *this,MethodInfo *method)

{
  if ((this->fields).ignoreSelectionOnce == 0) {
    return 0;
  }
  (this->fields).ignoreSelectionOnce = 0;
  return 1;
}

