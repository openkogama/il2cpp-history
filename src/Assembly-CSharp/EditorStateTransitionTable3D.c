
/* EditorStateTransitionTable3D(ContextMenuController, GizmoController) */

void Assembly-CSharp.dll::EditorStateTransitionTable3D::EditorStateTransitionTable3D__ctor
               (EditorStateTransitionTable3D *this,ContextMenuController *contextMenuController,
               GizmoController *gizmoController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__CEEditCubeTutorial);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__CEEnterCubeTutorial);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 );
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESAddLink);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESAddObjectLink);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESAddToMarketPlaceState);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESCubeEdit);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESInsert);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESLeaveCubeTutorial);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESRotating);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESSelection);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESTerrainEdit);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESTranslate);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESWaitForBuildModeAvatar);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESWaitForClone);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESWaitForGroup);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESWaitForPlayModeAvatar);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESWaitForSelected);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__ESWalkMode);
    LOCK();
    UNLOCK();
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
  StateTransitionTable::StateTransitionTable__ctor((StateTransitionTable *)this,(MethodInfo *)0x0);
  pEVar1 = TypeInfo__EditorEvent;
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
  pOVar3 = (Object *)0x0;
  uStackX_8 = 0;
  iVar4._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
  iVar4._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
  iVar4._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
  if (iVar4 < 0) {
    if (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)) {
      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
      pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
      FUN_?(pOVar3 + 1,&uStackX_8,(longlong)(int)(pEVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
  pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESCubeEdit);
  pEVar10[1].fields.stateType = -1;
  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
  ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                ->klass->rgctx_data[0x22].method;
    uVar11 = CONCAT71((int7)((ulonglong)method_00 >> 8),2);
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar2,pOVar3,(Object *)pEVar10,(InsertionBehavior__Enum)uVar11,method_00);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
    uStackX_8 = 5;
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    this_00 = (ESRotating *)FUN_?(TypeInfo__ESRotating);
    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
    ESRotating::ESRotating__ctor(this_00,(MethodInfo *)0x0);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar2,pOVar3,(Object *)this_00,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                 ->klass->rgctx_data[0x22].method);
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
      uStackX_8 = 0xc;
      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
      pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent,&uStackX_8);
      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
      this_01 = (ESSelection *)FUN_?(TypeInfo__ESSelection);
      uVar11 = 0;
      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
      ESSelection::ESSelection__ctor
                (this_01,contextMenuController,gizmoController,(MethodInfo *)0x0);
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar2,pOVar3,(Object *)this_01,(InsertionBehavior__Enum)uVar11,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                   ->klass->rgctx_data[0x22].method);
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
        uStackX_8 = 0x2f;
        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
        pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
        pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESTerrainEdit);
        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
        ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar2,pOVar3,(Object *)pEVar10,(InsertionBehavior__Enum)uVar11,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                     ->klass->rgctx_data[0x22].method);
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
          uStackX_8 = 0x13;
          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
          pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
          pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESWaitForSelected);
          *(undefined1 *)&pEVar10[1].klass = 1;
          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
          ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar2,pOVar3,(Object *)pEVar10,(InsertionBehavior__Enum)uVar11,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                       ->klass->rgctx_data[0x22].method);
            pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
            uStackX_8 = 0x1b;
            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
            pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
            this_02 = (ESWaitForGroup *)FUN_?(TypeInfo__ESWaitForGroup);
            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
            ESWaitForGroup::ESWaitForGroup__ctor(this_02,(MethodInfo *)0x0);
            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (pDVar2,pOVar3,(Object *)this_02,(InsertionBehavior__Enum)uVar11,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                         ->klass->rgctx_data[0x22].method);
              pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
              uStackX_8 = 0x22;
              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
              pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
              this_03 = (ESTranslate *)FUN_?(TypeInfo__ESTranslate);
              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
              ESTranslate::ESTranslate__ctor(this_03,(MethodInfo *)0x0);
              if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (pDVar2,pOVar3,(Object *)this_03,(InsertionBehavior__Enum)uVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                           ->klass->rgctx_data[0x22].method);
                pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
                uStackX_8 = 0x23;
                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                this_04 = (ESWaitForClone *)FUN_?(TypeInfo__ESWaitForClone);
                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                ESWaitForClone::ESWaitForClone__ctor(this_04,(MethodInfo *)0x0);
                if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (pDVar2,pOVar3,(Object *)this_04,(InsertionBehavior__Enum)uVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                             ->klass->rgctx_data[0x22].method);
                  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
                  uStackX_8 = 0x27;
                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                  pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                  pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESAddLink);
                  *(undefined4 *)&pEVar10[2].monitor = 0x3f333333;
                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                  ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryInsert
                              (pDVar2,pOVar3,(Object *)pEVar10,(InsertionBehavior__Enum)uVar11,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                               ->klass->rgctx_data[0x22].method);
                    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table;
                    uStackX_8 = 0x29;
                    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                    pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                    pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESWalkMode);
                    EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                    ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                (pDVar2,pOVar3,(Object *)pEVar10,(InsertionBehavior__Enum)uVar11,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                 ->klass->rgctx_data[0x22].method);
                      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._.table
                      ;
                      uStackX_8 = 0x3a;
                      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                      pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                      pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESWaitForPlayModeAvatar);
                      *(undefined4 *)((longlong)&pEVar10[1].klass + 4) = 5;
                      EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                      ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                        uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                  (pDVar2,pOVar3,(Object *)pEVar10,(InsertionBehavior__Enum)uVar11,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                   ->klass->rgctx_data[0x22].method);
                        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                 (this->fields)._._.table;
                        uStackX_8 = 0x3b;
                        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                        pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                        pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESWaitForBuildModeAvatar);
                        EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                        ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::
                          Dictionary_2_System_Object_System_Object__TryInsert
                                    (pDVar2,pOVar3,(Object *)pEVar10,
                                     (InsertionBehavior__Enum)uVar11,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                     ->klass->rgctx_data[0x22].method);
                          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                   (this->fields)._._.table;
                          uStackX_8 = 0x2a;
                          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                          pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent,&uStackX_8);
                          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                          pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESInsert);
                          if (cRam_? == '\0') {
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                                         );
                            LOCK();
                            UNLOCK();
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          cVar12 = cRam_?;
                          *(undefined4 *)&pEVar10[1].klass = 0x40a00000;
                          if (cVar12 == '\0') {
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cVar12 = '\x01';
                            cRam_? = '\x01';
                          }
                          fVar13 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                          *(undefined8 *)((longlong)&pEVar10[1].klass + 4) =
                               *(undefined8 *)
                                &TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                          *(float *)((longlong)&pEVar10[1].monitor + 4) = fVar13;
                          if (cVar12 == '\0') {
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            FUN_?(&TypeInfo__UnityEngine__Vector3);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
                          fVar15 = (pVVar14->zeroVector).y;
                          fVar13 = (pVVar14->zeroVector).z;
                          pEVar10[1].fields.stateType = (int32_t)(pVVar14->zeroVector).x;
                          *(float *)&pEVar10[1].fields.field_0x4 = fVar15;
                          *(float *)&pEVar10[1].fields.logger = fVar13;
                          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                          pWVar16 = (WorldObjectClientRef *)
                                    FUN_?(
                                                 TypeInfo__System__Collections__Generic__HashSet<int>
                                                 );
                          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                          FUN_?(pWVar16);
                          bVar9 = iRam_? != 0;
                          pEVar10[2].fields.tintedWo = pWVar16;
                          if (bVar9) {
                            uVar5 = (uint)((ulonglong)&pEVar10[2].fields.tintedWo >> 0xc);
                            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                            do {
                              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                              LOCK();
                              bVar9 = uVar7 == *puVar8;
                              if (bVar9) {
                                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar9);
                          }
                          EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                          ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                            uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__TryInsert
                                      (pDVar2,pOVar3,(Object *)pEVar10,
                                       (InsertionBehavior__Enum)uVar11,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                       ->klass->rgctx_data[0x22].method);
                            pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                     (this->fields)._._.table;
                            uStackX_8 = 0x2b;
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            pEVar10 = (ESStateBase *)FUN_?(TypeInfo__ESAddObjectLink);
                            EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                            ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                              uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__TryInsert
                                        (pDVar2,pOVar3,(Object *)pEVar10,
                                         (InsertionBehavior__Enum)uVar11,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                         ->klass->rgctx_data[0x22].method);
                              pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                       (this->fields)._._.table;
                              uStackX_8 = 0x37;
                              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                              pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                              pEVar10 = (ESStateBase *)FUN_?(TypeInfo__CEEnterCubeTutorial);
                              *(undefined4 *)&pEVar10[1].klass = 0x3f800000;
                              EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                              ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                              if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__TryInsert
                                          (pDVar2,pOVar3,(Object *)pEVar10,
                                           (InsertionBehavior__Enum)uVar11,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                           ->klass->rgctx_data[0x22].method);
                                pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                         (this->fields)._._.table;
                                uStackX_8 = 0x38;
                                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                this_05 = (CEEditCubeTutorial *)
                                          FUN_?(TypeInfo__CEEditCubeTutorial);
                                EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                CEEditCubeTutorial::CEEditCubeTutorial__ctor
                                          (this_05,(MethodInfo *)0x0);
                                if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                  uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__TryInsert
                                            (pDVar2,pOVar3,(Object *)this_05,
                                             (InsertionBehavior__Enum)uVar11,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                             ->klass->rgctx_data[0x22].method);
                                  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                           (this->fields)._._.table;
                                  uStackX_8 = 0x39;
                                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                  pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                  pEVar10 = (ESStateBase *)
                                            FUN_?(TypeInfo__ESLeaveCubeTutorial);
                                  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
                                  ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                                  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),2);
                                    EStackY_60._.table =
                                         (StateTransitionTable__Fields)&UNK_?;
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__TryInsert
                                              (pDVar2,pOVar3,(Object *)pEVar10,
                                               (InsertionBehavior__Enum)uVar11,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                               ->klass->rgctx_data[0x22].method);
                                    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                             (this->fields)._._.table;
                                    uStackX_8 = 0x31;
                                    EStackY_60._.table =
                                         (StateTransitionTable__Fields)&UNK_?;
                                    pOVar3 = (Object *)FUN_?(TypeInfo__EditorEvent);
                                    EStackY_60._.table =
                                         (StateTransitionTable__Fields)&UNK_?;
                                    pEVar10 = (ESStateBase *)
                                              FUN_?(TypeInfo__ESAddToMarketPlaceState);
                                    EStackY_60._.table =
                                         (StateTransitionTable__Fields)&UNK_?;
                                    ESStateBase::ESStateBase__ctor(pEVar10,(MethodInfo *)0x0);
                                    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)
                                    {
                                      EStackY_60._.table =
                                           (StateTransitionTable__Fields)&UNK_?;
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Object,System::Object]::
                                      Dictionary_2_System_Object_System_Object__TryInsert
                                                (pDVar2,pOVar3,(Object *)pEVar10,
                                                 (InsertionBehavior__Enum)
                                                 CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__Add_System__Object__IState_
                                                 ->klass->rgctx_data[0x22].method);
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_IState>__GetEnumerator__
                                                  ,0);
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&TypeInfo__ESStateBase);
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&TypeInfo__EditorEvent);
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__Dispose__
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__get_Current__
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Key__
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_IState>__get_Value__
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      SVar17.table = (this->fields)._._.table;
                                      if (SVar17.table == (Dictionary_2_System_Object_IState_ *)0x0)
                                      {
                                        FUN_?();
                                        pcVar18 = (code *)swi(3);
                                        (*pcVar18)();
                                        return;
                                      }
                                      if (iRam_? != 0) {
                                        uVar5 = (uint)((ulonglong)&EStackY_60 >> 0xc);
                                        puVar8 = (ulonglong *)
                                                 ((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 +
                                                 0xADDR);
                                        do {
                                          uVar7 = *puVar8;
                                          LOCK();
                                          uVar6 = *puVar8;
                                          if (uVar7 == uVar6) {
                                            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (uVar7 != uVar6);
                                      }
                                      uStackY_58 = (ulonglong)
                                                   (uint)((SVar17.table)->fields)._version;
                                      pOVar3 = (Object *)0x0;
                                      uStackY_40 = 2;
                                      uStackY_48 = 0;
                                      uStackY_50 = 0;
                                      EStackY_60._.table =
                                           (StateTransitionTable__Fields)
                                           (StateTransitionTable__Fields)SVar17.table;
                                      bVar19 = mscorlib.dll::System::Collections::Generic::
                                               Dictionary`2[TKey,TValue]+Enumerator[System::
                                               Object,System::Object]::
                                               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                                         ((
                                                  Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_
                                                  *)&stack0xffffffffffffffc8,
                                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_IState>__MoveNext__
                                                  );
                                      if (bVar19 == 0) {
                                        return;
                                      }
                                      FUN_?();
                                      FUN_?(SVar17.table);
                                      FUN_?();
                                      FUN_?(pOVar3);
                                      FUN_?();
                                      pcVar18 = (code *)swi(3);
                                      (*pcVar18)();
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  EStackY_60._.table = (StateTransitionTable__Fields)&UNK_?;
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

