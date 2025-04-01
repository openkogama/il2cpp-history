
/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVHamsterWheel+LocalObjectsHamsterWheel::
MVHamsterWheel_LocalObjectsHamsterWheel_FixedUpdate
          (MVHamsterWheel_LocalObjectsHamsterWheel *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__HamsterWheelMotor);
    func_?(&TypeInfo__MVHamsterWheel);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pSVar2 = (this->fields)._.vehicleMotor;
  piVar3 = (int *)(*(code *)(this->klass->vtable).get_Owner.method)
                             (this,(this->klass->vtable).Destroy.methodPtr);
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    bVar5 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
    if ((*(byte *)(*piVar3 + 0xb8) < bVar5) ||
       (*(MVHamsterWheel__Class **)(*(int *)(*piVar3 + 100) + -4 + (uint)bVar5 * 4) !=
        TypeInfo__MVHamsterWheel)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    piVar4 = (int *)0x0;
    if (bVar6) {
      piVar4 = piVar3;
    }
  }
  if (pSVar2 != (SimpleVehicleMotorBase *)0x0) {
    bVar5 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
    if ((bVar5 <= (pSVar2->klass->_1).naturalAligment) &&
       ((pSVar2->klass->_1).typeHierarchy[bVar5 - 1] == (Il2CppClass *)TypeInfo__HamsterWheelMotor))
    {
      if (_UNK_? < (pSVar2->fields).DirectInputMoveMap.z) {
        if (piVar4 == (int *)0x0) goto code_?;
        if ((char)piVar4[0x53] == '\0') {
          pMVar7 = (MVRuntimeDataVariable *)piVar4[0x52];
          bStack_8 = 1;
          pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
          if (pMVar7 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar9,(MethodInfo *)0x0);
          *(undefined1 *)(piVar4 + 0x53) = 1;
        }
      }
      if ((pSVar2->fields).DirectInputMoveMap.z <= 0.0) {
        if (piVar4 == (int *)0x0) goto code_?;
        if ((char)piVar4[0x53] != '\0') {
          pMVar7 = (MVRuntimeDataVariable *)piVar4[0x52];
          bStack_8 = 0;
          pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
          if (pMVar7 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar9,(MethodInfo *)0x0);
          *(undefined1 *)(piVar4 + 0x53) = 0;
        }
        pfVar10 = &(pSVar2->fields).DirectInputMoveMap.z;
        if (*pfVar10 <= 0.0 && *pfVar10 != 0.0) {
          if (piVar4 == (int *)0x0) goto code_?;
          if ((char)piVar4[0x55] == '\0') {
            pMVar7 = (MVRuntimeDataVariable *)piVar4[0x54];
            bStack_8 = 1;
            pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
            if (pMVar7 == (MVRuntimeDataVariable *)0x0) goto code_?;
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar9,(MethodInfo *)0x0)
            ;
            *(undefined1 *)(piVar4 + 0x55) = 1;
          }
        }
      }
      if (_UNK_? <= (pSVar2->fields).DirectInputMoveMap.z) {
        if (piVar4 == (int *)0x0) goto code_?;
        if ((char)piVar4[0x55] != '\0') {
          pMVar7 = (MVRuntimeDataVariable *)piVar4[0x54];
          bStack_8 = 0;
          pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
          if (pMVar7 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar7,pOVar9,(MethodInfo *)0x0);
          *(undefined1 *)(piVar4 + 0x55) = 0;
        }
      }
      pSVar2 = (pMVar1->fields)._.vehicleMotor;
      if (pSVar2 != (SimpleVehicleMotorBase *)0x0) {
        bStack_8 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
        if ((bStack_8 <= (pSVar2->klass->_1).naturalAligment) &&
           ((pSVar2->klass->_1).typeHierarchy[bStack_8 - 1] ==
            (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
          pSVar11 = (SimpleVehicleMotorBase *)0x0;
          if ((pSVar2->klass->_1).typeHierarchy[bStack_8 - 1] ==
              (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
            pSVar11 = pSVar2;
          }
          cVar12 = (*(code *)(pSVar11->klass->vtable).get_Grounded.method)
                            (pSVar11,(pSVar11->klass->vtable).__unknown.methodPtr);
          if (cVar12 != '\0') {
            if (piVar4 == (int *)0x0) goto code_?;
            if ((char)piVar4[0x57] == '\0') {
              pMVar7 = (MVRuntimeDataVariable *)piVar4[0x56];
              bStack_8 = 1;
              pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
              if (pMVar7 == (MVRuntimeDataVariable *)0x0) goto code_?;
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (pMVar7,pOVar9,(MethodInfo *)0x0);
              *(undefined1 *)(piVar4 + 0x57) = 1;
            }
          }
          this_00 = this;
          pSVar2 = (pMVar1->fields)._.vehicleMotor;
          if (pSVar2 != (SimpleVehicleMotorBase *)0x0) {
            bStack_8 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
            if (bStack_8 <= (pSVar2->klass->_1).naturalAligment) {
              ppIVar13 = (pSVar2->klass->_1).typeHierarchy;
              if (ppIVar13[bStack_8 - 1] == (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
                pSVar11 = (SimpleVehicleMotorBase *)0x0;
                if (ppIVar13[bStack_8 - 1] == (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
                  pSVar11 = pSVar2;
                }
                cVar12 = (*(code *)(pSVar11->klass->vtable).get_Grounded.method)
                                  (pSVar11,(pSVar11->klass->vtable).__unknown.methodPtr);
                if (cVar12 == '\0') {
                  if (piVar4 == (int *)0x0) goto code_?;
                  if ((char)piVar4[0x57] != '\0') {
                    pMVar7 = (MVRuntimeDataVariable *)piVar4[0x56];
                    this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
                    pOVar9 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
                    if (pMVar7 == (MVRuntimeDataVariable *)0x0) goto code_?;
                    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                              (pMVar7,pOVar9,(MethodInfo *)0x0);
                    *(undefined1 *)(piVar4 + 0x57) = 0;
                  }
                }
                pIVar14 = MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                          MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_FixedUpdate
                                    ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)this_00,
                                     movementMap,(MethodInfo *)0x0);
                return pIVar14;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pIVar14 = (IInputToPlayerMovement *)(*pcVar15)();
  return pIVar14;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVHamsterWheel+LocalObjectsHamsterWheel::
     MVHamsterWheel_LocalObjectsHamsterWheel_Leave
               (MVHamsterWheel_LocalObjectsHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MVHamsterWheel);
    cRam_? = '\x01';
  }
  MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
  MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Leave
            ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)this,(MethodInfo *)0x0);
  piVar1 = (int *)(*(code *)(this->klass->vtable).get_Owner.method)
                            (this,(this->klass->vtable).Destroy.methodPtr);
  if (piVar1 != (int *)0x0) {
    bVar2 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
    if ((bVar2 <= *(byte *)(*piVar1 + 0xb8)) &&
       (iVar3 = *(int *)(*piVar1 + 100),
       *(MVHamsterWheel__Class **)(iVar3 + -4 + (uint)bVar2 * 4) == TypeInfo__MVHamsterWheel)) {
      piVar4 = (int *)0x0;
      if (*(MVHamsterWheel__Class **)(iVar3 + -4 + (uint)bVar2 * 4) == TypeInfo__MVHamsterWheel) {
        piVar4 = piVar1;
      }
      pMVar5 = (MVRuntimeDataVariable *)piVar4[0x52];
      pOVar6 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
      if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar5,pOVar6,(MethodInfo *)0x0);
        piVar1 = (int *)(*(code *)(this->klass->vtable).get_Owner.method)
                                  (this,(this->klass->vtable).Destroy.methodPtr);
        if (piVar1 != (int *)0x0) {
          bVar2 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
          if ((bVar2 <= *(byte *)(*piVar1 + 0xb8)) &&
             (iVar3 = *(int *)(*piVar1 + 100),
             *(MVHamsterWheel__Class **)(iVar3 + -4 + (uint)bVar2 * 4) == TypeInfo__MVHamsterWheel))
          {
            piVar4 = (int *)0x0;
            if (*(MVHamsterWheel__Class **)(iVar3 + -4 + (uint)bVar2 * 4) ==
                TypeInfo__MVHamsterWheel) {
              piVar4 = piVar1;
            }
            pMVar5 = (MVRuntimeDataVariable *)piVar4[0x54];
            pOVar6 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffa);
            if (pMVar5 != (MVRuntimeDataVariable *)0x0) {
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (pMVar5,pOVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

