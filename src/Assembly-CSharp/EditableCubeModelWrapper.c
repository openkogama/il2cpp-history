
/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_OnEnterObject
               (EditableCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)e,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
     (this_00 = (pMVar2->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
    pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    uStack_4 = 0;
    if (pMVar3 != (MVCameraBase *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_4 = 0;
      (*(pMVar3->klass->vtable).FocusOnObject.methodPtr)
                (pMVar3,(this->fields).cubeModelBase,TypeRef__System__Activator__T._0_4_,&uStack_4,
                 &uStack_7,(pMVar3->klass->vtable).FocusOnObject.method);
      pMVar8 = (this->fields).cubeModelBase;
      if (((pMVar8 != (MVCubeModelInstance *)0x0) && (e != (EditorStateMachine *)0x0)) &&
         (this_01 = (e->fields).selectionController, this_01 != (SelectionController *)0x0)) {
        value = (Object *)0x0;
        SelectionController::SelectionController_SelectWO
                  (this_01,(pMVar8->fields)._._._.id,0,1,(MethodInfo *)0x0);
        uStackX_10 = 0;
        iVar9._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
        iVar9._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
        iVar9._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
        if (iVar9 < 0) {
          if (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)) {
            value = (Object *)FUN_?(TypeInfo__EditorEvent);
            FUN_?(value + 1,&uStackX_10);
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)(value + 1) >> 0xc);
              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
          }
        }
        else {
          value = (Object *)((ulonglong)uStackX_14 << 0x20);
        }
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_OnExitObject
               (EditableCubeModelWrapper *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(e,(MethodInfo *)0x0);
    auStackX_10[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_10);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
    return 1;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* Void SetConstraints(IntVector, IntVector, Int32) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
               (EditableCubeModelWrapper *this,IntVector *min,IntVector *max,int32_t minCubeCount,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<IModelingConstraint>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    *(undefined4 *)&object[1].monitor = *(undefined4 *)min;
    *(int16_t *)((longlong)&object[1].monitor + 4) = min->z;
    *(undefined4 *)((longlong)&object[1].monitor + 6) = *(undefined4 *)max;
    *(int16_t *)((longlong)&object[2].klass + 2) = max->z;
    *(int32_t *)((longlong)&object[2].klass + 4) = minCubeCount;
    pMVar6 = (this->fields).cubeModelBase;
    this_00 = (Func_1_UnityEngine_Vector2Int_ *)
              FUN_?(TypeInfo__System__Func<IModelingConstraint>);
    mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::Func_1_UnityEngine_Vector2Int___ctor
              (this_00,object,
               MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__,
               (MethodInfo *)0x0);
    if (pMVar6 != (MVCubeModelInstance *)0x0) {
      bVar1 = iRam_? != 0;
      (pMVar6->fields)._._ModelingConstraintBuilder_k__BackingField =
           (Func_1_IModelingConstraint_ *)this_00;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pMVar6->fields)._._ModelingConstraintBuilder_k__BackingField >>
                      0xc);
        uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar7 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar7 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* EditableCubeModelWrapper(MVCubeModelInstance) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper__ctor
               (EditableCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,MethodInfo *method
               )

{
  bVar1 = iRam_? != 0;
  (this->fields).cubeModelBase = cubeModelBase;
  pMVar2 = cubeModelBase;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
    pMVar2 = (MVCubeModelInstance *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pMVar4 = pMVar2->klass;
      this = (EditableCubeModelWrapper *)((ulonglong)pMVar4 | 1L << (longlong)method);
      LOCK();
      bVar1 = pMVar4 == pMVar2->klass;
      if (bVar1) {
        pMVar2->klass = (MVCubeModelInstance__Class *)this;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cubeModelBase == (MVCubeModelInstance *)0x0) {
    FUN_?(this,pMVar2,method);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar6 = &(cubeModelBase->fields)._._.interactionFlags;
  *piVar6 = *piVar6 | 0x10;
  return;
}


/* EditableCubeModelWrapper(MVCubeModelInstance, IntVector, IntVector, Int32) */

void Assembly-CSharp.dll::EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
               (EditableCubeModelWrapper *this,MVCubeModelInstance *cubeModelBase,IntVector *min,
               IntVector *max,int32_t minCubeCount,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).cubeModelBase = cubeModelBase;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  if (cubeModelBase == (MVCubeModelInstance *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  aIStackX_8[0].x = max->x;
  aIStackX_8[0].y = max->y;
  piVar7 = &(cubeModelBase->fields)._._.interactionFlags;
  *piVar7 = *piVar7 | 0x10;
  aIStackX_8[0].z = max->z;
  aIStack_8[0].x = min->x;
  aIStack_8[0].y = min->y;
  aIStack_8[0].z = min->z;
  EditableCubeModelWrapper_SetConstraints(this,aIStack_8,aIStackX_8,minCubeCount,(MethodInfo *)0x0)
  ;
  return;
}

