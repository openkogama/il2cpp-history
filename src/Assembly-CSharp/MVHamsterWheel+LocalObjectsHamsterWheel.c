
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
  this_00 = this;
  ppMVar1 = &this->klass;
  this = (MVHamsterWheel_LocalObjectsHamsterWheel *)(this->fields)._.vehicleMotor;
  piVar2 = (int *)(*(code *)((*ppMVar1)->vtable).get_Owner.method)
                            (this_00,((*ppMVar1)->vtable).Destroy.methodPtr);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    if ((*(byte *)(*piVar2 + 0xb8) < (TypeInfo__MVHamsterWheel->_1).naturalAligment) ||
       (*(MVHamsterWheel__Class **)
         (*(int *)(*piVar2 + 100) + -4 + (uint)(TypeInfo__MVHamsterWheel->_1).naturalAligment * 4)
        != TypeInfo__MVHamsterWheel)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    piVar3 = (int *)0x0;
    if (bVar4) {
      piVar3 = piVar2;
    }
  }
  if (this != (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) {
    if (((this->klass->_1).naturalAligment < (TypeInfo__HamsterWheelMotor->_1).naturalAligment) ||
       ((this->klass->_1).typeHierarchy[(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0;
    if (bVar4) {
      pMVar5 = this;
    }
    if (pMVar5 != (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) {
      if (_UNK_? < (float)pMVar5[1].fields._.pickupGUI) {
        if (piVar3 == (int *)0x0) goto code_?;
        if ((char)piVar3[0x53] == '\0') {
          pMVar6 = (MVRuntimeDataVariable *)piVar3[0x52];
          this = (MVHamsterWheel_LocalObjectsHamsterWheel *)CONCAT13(1,this._0_3_);
          pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
          if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar6,pOVar7,(MethodInfo *)0x0);
          *(undefined1 *)(piVar3 + 0x53) = 1;
        }
      }
      if ((float)pMVar5[1].fields._.pickupGUI <= 0.0) {
        if (piVar3 == (int *)0x0) goto code_?;
        if ((char)piVar3[0x53] != '\0') {
          pMVar6 = (MVRuntimeDataVariable *)piVar3[0x52];
          this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
          pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
          if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar6,pOVar7,(MethodInfo *)0x0);
          *(undefined1 *)(piVar3 + 0x53) = 0;
        }
        ppPVar8 = &pMVar5[1].fields._.pickupGUI;
        if ((float)*ppPVar8 <= 0.0 && (float)*ppPVar8 != 0.0) {
          if (piVar3 == (int *)0x0) goto code_?;
          if ((char)piVar3[0x55] == '\0') {
            pMVar6 = (MVRuntimeDataVariable *)piVar3[0x54];
            this = (MVHamsterWheel_LocalObjectsHamsterWheel *)CONCAT13(1,this._0_3_);
            pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
            if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar6,pOVar7,(MethodInfo *)0x0);
            *(undefined1 *)(piVar3 + 0x55) = 1;
          }
        }
      }
      if (_UNK_? <= (float)pMVar5[1].fields._.pickupGUI) {
        if (piVar3 == (int *)0x0) goto code_?;
        if ((char)piVar3[0x55] != '\0') {
          pMVar6 = (MVRuntimeDataVariable *)piVar3[0x54];
          this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
          pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
          if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar6,pOVar7,(MethodInfo *)0x0);
          *(undefined1 *)(piVar3 + 0x55) = 0;
        }
      }
      pSVar9 = (this_00->fields)._.vehicleMotor;
      if (((pSVar9 != (SimpleVehicleMotorBase *)0x0) &&
          ((TypeInfo__HamsterWheelMotor->_1).naturalAligment <= (pSVar9->klass->_1).naturalAligment)
          ) && ((pSVar9->klass->_1).typeHierarchy
                [(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1] ==
                (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
        pSVar10 = (SimpleVehicleMotorBase *)0x0;
        if ((pSVar9->klass->_1).typeHierarchy[(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1]
            == (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
          pSVar10 = pSVar9;
        }
        cVar11 = (*(code *)(pSVar10->klass->vtable).get_Grounded.method)
                          (pSVar10,(pSVar10->klass->vtable).__unknown.methodPtr);
        if (cVar11 != '\0') {
          if (piVar3 == (int *)0x0) goto code_?;
          if ((char)piVar3[0x57] == '\0') {
            pMVar6 = (MVRuntimeDataVariable *)piVar3[0x56];
            this = (MVHamsterWheel_LocalObjectsHamsterWheel *)CONCAT13(1,this._0_3_);
            pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
            if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar6,pOVar7,(MethodInfo *)0x0);
            *(undefined1 *)(piVar3 + 0x57) = 1;
          }
        }
        pSVar9 = (this_00->fields)._.vehicleMotor;
        if (((pSVar9 != (SimpleVehicleMotorBase *)0x0) &&
            ((TypeInfo__HamsterWheelMotor->_1).naturalAligment <=
             (pSVar9->klass->_1).naturalAligment)) &&
           ((pSVar9->klass->_1).typeHierarchy[(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1]
            == (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
          pSVar10 = (SimpleVehicleMotorBase *)0x0;
          if ((pSVar9->klass->_1).typeHierarchy
              [(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1] ==
              (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
            pSVar10 = pSVar9;
          }
          cVar11 = (*(code *)(pSVar10->klass->vtable).get_Grounded.method)
                            (pSVar10,(pSVar10->klass->vtable).__unknown.methodPtr);
          if (cVar11 == '\0') {
            if (piVar3 == (int *)0x0) goto code_?;
            if ((char)piVar3[0x57] != '\0') {
              pMVar6 = (MVRuntimeDataVariable *)piVar3[0x56];
              this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
              pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
              if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (pMVar6,pOVar7,(MethodInfo *)0x0);
              *(undefined1 *)(piVar3 + 0x57) = 0;
            }
          }
          pIVar12 = MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                    MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_FixedUpdate
                              ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)this_00,
                               movementMap,(MethodInfo *)0x0);
          return pIVar12;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  pIVar12 = (IInputToPlayerMovement *)(*pcVar13)();
  return pIVar12;
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
  pMVar1 = this;
  MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
  MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Leave
            ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)this,(MethodInfo *)0x0);
  piVar2 = (int *)(*(code *)(pMVar1->klass->vtable).get_Owner.method)
                            (pMVar1,(pMVar1->klass->vtable).Destroy.methodPtr);
  if (piVar2 != (int *)0x0) {
    if (((TypeInfo__MVHamsterWheel->_1).naturalAligment <= *(byte *)(*piVar2 + 0xb8)) &&
       (*(MVHamsterWheel__Class **)
         (*(int *)(*piVar2 + 100) + -4 + (uint)(TypeInfo__MVHamsterWheel->_1).naturalAligment * 4)
        == TypeInfo__MVHamsterWheel)) {
      piVar3 = (int *)0x0;
      if (*(MVHamsterWheel__Class **)
           (*(int *)(*piVar2 + 100) + -4 + (uint)(TypeInfo__MVHamsterWheel->_1).naturalAligment * 4)
          == TypeInfo__MVHamsterWheel) {
        piVar3 = piVar2;
      }
      pMVar4 = (MVRuntimeDataVariable *)piVar3[0x52];
      this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
      pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
      if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar4,pOVar5,(MethodInfo *)0x0);
        piVar2 = (int *)(*(code *)(pMVar1->klass->vtable).get_Owner.method)
                                  (pMVar1,(pMVar1->klass->vtable).Destroy.methodPtr);
        if (piVar2 != (int *)0x0) {
          if (((TypeInfo__MVHamsterWheel->_1).naturalAligment <= *(byte *)(*piVar2 + 0xb8)) &&
             (*(MVHamsterWheel__Class **)
               (*(int *)(*piVar2 + 100) + -4 +
               (uint)(TypeInfo__MVHamsterWheel->_1).naturalAligment * 4) == TypeInfo__MVHamsterWheel
             )) {
            piVar3 = (int *)0x0;
            if (*(MVHamsterWheel__Class **)
                 (*(int *)(*piVar2 + 100) + -4 +
                 (uint)(TypeInfo__MVHamsterWheel->_1).naturalAligment * 4) ==
                TypeInfo__MVHamsterWheel) {
              piVar3 = piVar2;
            }
            pMVar4 = (MVRuntimeDataVariable *)piVar3[0x54];
            uStack_6 = uStack_6 & 0xffffff;
            pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&uStack_6 + 3);
            if (pMVar4 != (MVRuntimeDataVariable *)0x0) {
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (pMVar4,pOVar5,(MethodInfo *)0x0);
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

