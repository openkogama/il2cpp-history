
/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVHamsterWheel+LocalObjectsHamsterWheel::
MVHamsterWheel_LocalObjectsHamsterWheel_FixedUpdate
          (MVHamsterWheel_LocalObjectsHamsterWheel *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pSVar2 = (this->fields)._.vehicleMotor;
  if (pSVar2 == (SimpleVehicleMotorBase *)0x0) {
    pSVar3 = (SimpleVehicleMotorBase *)0x0;
  }
  else {
    bVar4 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
    if (((pSVar2->klass->_1).naturalAligment < bVar4) ||
       ((pSVar2->klass->_1).typeHierarchy[bVar4 - 1] != (Il2CppClass *)TypeInfo__HamsterWheelMotor))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pSVar3 = (SimpleVehicleMotorBase *)0x0;
    if (bVar5) {
      pSVar3 = pSVar2;
    }
  }
  piVar6 = (int *)(*(code *)(this->klass->vtable).get_Owner.method)
                            (this,(this->klass->vtable).Destroy.methodPtr);
  if (piVar6 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    bVar4 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
    if ((*(byte *)(*piVar6 + 0xb8) < bVar4) ||
       (*(MVHamsterWheel__Class **)(*(int *)(*piVar6 + 100) + -4 + (uint)bVar4 * 4) !=
        TypeInfo__MVHamsterWheel)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    piVar7 = (int *)0x0;
    if (bVar5) {
      piVar7 = piVar6;
    }
  }
  if (pSVar3 != (SimpleVehicleMotorBase *)0x0) {
    fVar8 = (pSVar3->fields).DirectInputMoveMap.z;
    if (0.0 < fVar8) {
      if (piVar7 == (int *)0x0) goto code_?;
      if ((char)piVar7[0x4d] == '\0') {
        pMVar9 = (MVRuntimeDataVariable *)piVar7[0x4c];
        bStack_10 = 1;
        pOVar11 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_10);
        if (pMVar9 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar9,pOVar11,(MethodInfo *)0x0);
        *(undefined1 *)(piVar7 + 0x4d) = 1;
        fVar8 = (pSVar3->fields).DirectInputMoveMap.z;
      }
    }
    if (fVar8 <= 0.0) {
      if (piVar7 == (int *)0x0) goto code_?;
      if ((char)piVar7[0x4d] != '\0') {
        pMVar9 = (MVRuntimeDataVariable *)piVar7[0x4c];
        bStack_10 = 0;
        pOVar11 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_10);
        if (pMVar9 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar9,pOVar11,(MethodInfo *)0x0);
        *(undefined1 *)(piVar7 + 0x4d) = 0;
        fVar8 = (pSVar3->fields).DirectInputMoveMap.z;
      }
      if (fVar8 < 0.0) {
        if (piVar7 == (int *)0x0) goto code_?;
        if ((char)piVar7[0x4f] == '\0') {
          pMVar9 = (MVRuntimeDataVariable *)piVar7[0x4e];
          bStack_10 = 1;
          pOVar11 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_10);
          if (pMVar9 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar9,pOVar11,(MethodInfo *)0x0);
          *(undefined1 *)(piVar7 + 0x4f) = 1;
          fVar8 = (pSVar3->fields).DirectInputMoveMap.z;
        }
      }
    }
    if (0.0 <= fVar8) {
      if (piVar7 == (int *)0x0) goto code_?;
      if ((char)piVar7[0x4f] != '\0') {
        pMVar9 = (MVRuntimeDataVariable *)piVar7[0x4e];
        bStack_10 = 0;
        pOVar11 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_10);
        if (pMVar9 == (MVRuntimeDataVariable *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar9,pOVar11,(MethodInfo *)0x0);
        *(undefined1 *)(piVar7 + 0x4f) = 0;
      }
    }
    pMVar12 = this;
    pSVar2 = (pMVar1->fields)._.vehicleMotor;
    if (pSVar2 != (SimpleVehicleMotorBase *)0x0) {
      bStack_13 = (pSVar2->klass->_1).naturalAligment;
      bStack_10 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
      if ((bStack_13 < bStack_10) ||
         (bStack_14 = 1,
         (pSVar2->klass->_1).typeHierarchy[bStack_10 - 1] !=
         (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
        bStack_14 = 0;
      }
      pSVar3 = (SimpleVehicleMotorBase *)0x0;
      if (bStack_14 != 0) {
        pSVar3 = pSVar2;
      }
      if (pSVar3 != (SimpleVehicleMotorBase *)0x0) {
        if ((bStack_13 < bStack_10) ||
           ((pSVar2->klass->_1).typeHierarchy[bStack_10 - 1] !=
            (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pSVar3 = (SimpleVehicleMotorBase *)0x0;
        if (bVar5) {
          pSVar3 = pSVar2;
        }
        cVar15 = (*(code *)(pSVar3->klass->vtable).__unknown.method)
                          (pSVar3,(pSVar3->klass->vtable).__unknown_1.methodPtr);
        if (cVar15 != '\0') {
          if (piVar7 == (int *)0x0) goto code_?;
          if ((char)piVar7[0x51] == '\0') {
            pMVar9 = (MVRuntimeDataVariable *)piVar7[0x50];
            bStack_10 = 1;
            pOVar11 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_10);
            if (pMVar9 == (MVRuntimeDataVariable *)0x0) goto code_?;
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar9,pOVar11,(MethodInfo *)0x0)
            ;
            *(undefined1 *)(piVar7 + 0x51) = 1;
          }
        }
        pMVar1 = this;
        pSVar2 = (pMVar12->fields)._.vehicleMotor;
        if (pSVar2 != (SimpleVehicleMotorBase *)0x0) {
          bStack_13 = (pSVar2->klass->_1).naturalAligment;
          bStack_14 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
          if ((bStack_13 < bStack_14) ||
             (bStack_10 = 1,
             (pSVar2->klass->_1).typeHierarchy[bStack_14 - 1] !=
             (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
            bStack_10 = 0;
          }
          pSVar3 = (SimpleVehicleMotorBase *)0x0;
          if (bStack_10 != 0) {
            pSVar3 = pSVar2;
          }
          if (pSVar3 != (SimpleVehicleMotorBase *)0x0) {
            if ((bStack_13 < bStack_14) ||
               ((pSVar2->klass->_1).typeHierarchy[bStack_14 - 1] !=
                (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            pSVar3 = (SimpleVehicleMotorBase *)0x0;
            if (bVar5) {
              pSVar3 = pSVar2;
            }
            cVar15 = (*(code *)(pSVar3->klass->vtable).__unknown.method)
                              (pSVar3,(pSVar3->klass->vtable).__unknown_1.methodPtr);
            if (cVar15 == '\0') {
              if (piVar7 == (int *)0x0) goto code_?;
              if ((char)piVar7[0x51] != '\0') {
                pMVar9 = (MVRuntimeDataVariable *)piVar7[0x50];
                this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
                pOVar11 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
                if (pMVar9 == (MVRuntimeDataVariable *)0x0) goto code_?;
                MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                          (pMVar9,pOVar11,(MethodInfo *)0x0);
                *(undefined1 *)(piVar7 + 0x51) = 0;
              }
            }
            pIVar16 = MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                      MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_FixedUpdate
                                ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)pMVar1,
                                 movementMap,(MethodInfo *)0x0);
            return pIVar16;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  pIVar16 = (IInputToPlayerMovement *)(*pcVar17)();
  return pIVar16;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVHamsterWheel+LocalObjectsHamsterWheel::
     MVHamsterWheel_LocalObjectsHamsterWheel_Leave
               (MVHamsterWheel_LocalObjectsHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
  MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Leave
            ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)this,(MethodInfo *)0x0);
  piVar1 = (int *)(*(code *)(this->klass->vtable).get_Owner.method)
                            (this,(this->klass->vtable).Destroy.methodPtr);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    bVar3 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
    if ((*(byte *)(iVar2 + 0xb8) < bVar3) ||
       (bVar4 = true,
       *(MVHamsterWheel__Class **)(*(int *)(iVar2 + 100) + -4 + (uint)bVar3 * 4) !=
       TypeInfo__MVHamsterWheel)) {
      bVar4 = false;
    }
    piVar5 = (int *)0x0;
    if (bVar4) {
      piVar5 = piVar1;
    }
    if (piVar5 != (int *)0x0) {
      if ((*(byte *)(iVar2 + 0xb8) < bVar3) ||
         (*(MVHamsterWheel__Class **)(*(int *)(iVar2 + 100) + -4 + (uint)bVar3 * 4) !=
          TypeInfo__MVHamsterWheel)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      piVar5 = (int *)0x0;
      if (bVar4) {
        piVar5 = piVar1;
      }
      pMVar6 = (MVRuntimeDataVariable *)piVar5[0x4c];
      pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffff9);
      if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar6,pOVar7,(MethodInfo *)0x0);
        piVar1 = (int *)(*(code *)(this->klass->vtable).get_Owner.method)
                                  (this,(this->klass->vtable).Destroy.methodPtr);
        if (piVar1 != (int *)0x0) {
          iVar2 = *piVar1;
          bVar3 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
          if ((*(byte *)(iVar2 + 0xb8) < bVar3) ||
             (*(MVHamsterWheel__Class **)(*(int *)(iVar2 + 100) + -4 + (uint)bVar3 * 4) !=
              TypeInfo__MVHamsterWheel)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          piVar5 = (int *)0x0;
          if (bVar4) {
            piVar5 = piVar1;
          }
          if (piVar5 != (int *)0x0) {
            if ((*(byte *)(iVar2 + 0xb8) < bVar3) ||
               (*(MVHamsterWheel__Class **)(*(int *)(iVar2 + 100) + -4 + (uint)bVar3 * 4) !=
                TypeInfo__MVHamsterWheel)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            piVar5 = (int *)0x0;
            if (bVar4) {
              piVar5 = piVar1;
            }
            pMVar6 = (MVRuntimeDataVariable *)piVar5[0x4e];
            pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffff8);
            if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (pMVar6,pOVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

