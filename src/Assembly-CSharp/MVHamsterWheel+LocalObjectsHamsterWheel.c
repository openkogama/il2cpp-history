
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
  pSVar1 = (this->fields)._.vehicleMotor;
  this = (MVHamsterWheel_LocalObjectsHamsterWheel *)
         (*(code *)(this->klass->vtable).get_Owner.method)
                   (this,(this->klass->vtable).Destroy.methodPtr);
  if (this == (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) {
    pMVar2 = (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0;
  }
  else {
    if (((this->klass->_1).naturalAligment < (TypeInfo__MVHamsterWheel->_1).naturalAligment) ||
       ((MVHamsterWheel__Class *)
        (this->klass->_1).typeHierarchy[(TypeInfo__MVHamsterWheel->_1).naturalAligment - 1] !=
        TypeInfo__MVHamsterWheel)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar2 = (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0;
    if (bVar3) {
      pMVar2 = this;
    }
  }
  if (((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
      ((TypeInfo__HamsterWheelMotor->_1).naturalAligment <= (pSVar1->klass->_1).naturalAligment)) &&
     ((pSVar1->klass->_1).typeHierarchy[(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1] ==
      (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
    if (_UNK_? < (pSVar1->fields).DirectInputMoveMap.z) {
      if (pMVar2 == (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) goto code_?;
      if (*(char *)&pMVar2[6].fields._.owner == '\0') {
        pSVar4 = pMVar2[6].fields._.vehicleMotor;
        this = (MVHamsterWheel_LocalObjectsHamsterWheel *)CONCAT13(1,this._0_3_);
        pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
        if (pSVar4 == (SimpleVehicleMotorBase *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  ((MVRuntimeDataVariable *)pSVar4,pOVar5,(MethodInfo *)0x0);
        *(undefined1 *)&pMVar2[6].fields._.owner = 1;
      }
    }
    if ((pSVar1->fields).DirectInputMoveMap.z <= 0.0) {
      if (pMVar2 == (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) goto code_?;
      if (*(char *)&pMVar2[6].fields._.owner != '\0') {
        pSVar4 = pMVar2[6].fields._.vehicleMotor;
        this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
        pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
        if (pSVar4 == (SimpleVehicleMotorBase *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  ((MVRuntimeDataVariable *)pSVar4,pOVar5,(MethodInfo *)0x0);
        *(undefined1 *)&pMVar2[6].fields._.owner = 0;
      }
      pfVar6 = &(pSVar1->fields).DirectInputMoveMap.z;
      if (*pfVar6 <= 0.0 && *pfVar6 != 0.0) {
        if (pMVar2 == (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) goto code_?;
        if (*(char *)&pMVar2[7].monitor == '\0') {
          pMVar7 = pMVar2[7].klass;
          this = (MVHamsterWheel_LocalObjectsHamsterWheel *)CONCAT13(1,this._0_3_);
          pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
          if (pMVar7 == (MVHamsterWheel_LocalObjectsHamsterWheel__Class *)0x0)
          goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    ((MVRuntimeDataVariable *)pMVar7,pOVar5,(MethodInfo *)0x0);
          *(undefined1 *)&pMVar2[7].monitor = 1;
        }
      }
    }
    if (_UNK_? <= (pSVar1->fields).DirectInputMoveMap.z) {
      if (pMVar2 == (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) goto code_?;
      if (*(char *)&pMVar2[7].monitor != '\0') {
        pMVar7 = pMVar2[7].klass;
        this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
        pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
        if (pMVar7 == (MVHamsterWheel_LocalObjectsHamsterWheel__Class *)0x0) goto code_?;
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  ((MVRuntimeDataVariable *)pMVar7,pOVar5,(MethodInfo *)0x0);
        *(undefined1 *)&pMVar2[7].monitor = 0;
      }
    }
    pSVar1 = (this_00->fields)._.vehicleMotor;
    if (((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
        ((TypeInfo__HamsterWheelMotor->_1).naturalAligment <= (pSVar1->klass->_1).naturalAligment))
       && ((pSVar1->klass->_1).typeHierarchy[(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1]
           == (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
      pSVar4 = (SimpleVehicleMotorBase *)0x0;
      if ((pSVar1->klass->_1).typeHierarchy[(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1]
          == (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
        pSVar4 = pSVar1;
      }
      cVar8 = (*(code *)(pSVar4->klass->vtable).get_Grounded.method)
                        (pSVar4,(pSVar4->klass->vtable).__unknown.methodPtr);
      if (cVar8 != '\0') {
        if (pMVar2 == (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) goto code_?;
        if (*(char *)&pMVar2[7].fields._._.onLeave == '\0') {
          pAVar9 = pMVar2[7].fields._._.onDestroy;
          this = (MVHamsterWheel_LocalObjectsHamsterWheel *)CONCAT13(1,this._0_3_);
          pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
          if (pAVar9 == (Action *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    ((MVRuntimeDataVariable *)pAVar9,pOVar5,(MethodInfo *)0x0);
          *(undefined1 *)&pMVar2[7].fields._._.onLeave = 1;
        }
      }
      pSVar1 = (this_00->fields)._.vehicleMotor;
      if (((pSVar1 != (SimpleVehicleMotorBase *)0x0) &&
          ((TypeInfo__HamsterWheelMotor->_1).naturalAligment <= (pSVar1->klass->_1).naturalAligment)
          ) && ((pSVar1->klass->_1).typeHierarchy
                [(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1] ==
                (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
        pSVar4 = (SimpleVehicleMotorBase *)0x0;
        if ((pSVar1->klass->_1).typeHierarchy[(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1]
            == (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
          pSVar4 = pSVar1;
        }
        cVar8 = (*(code *)(pSVar4->klass->vtable).get_Grounded.method)
                          (pSVar4,(pSVar4->klass->vtable).__unknown.methodPtr);
        if (cVar8 == '\0') {
          if (pMVar2 == (MVHamsterWheel_LocalObjectsHamsterWheel *)0x0) goto code_?;
          if (*(char *)&pMVar2[7].fields._._.onLeave != '\0') {
            pAVar9 = pMVar2[7].fields._._.onDestroy;
            this = (MVHamsterWheel_LocalObjectsHamsterWheel *)((uint)this & 0xffffff);
            pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
            if (pAVar9 == (Action *)0x0) goto code_?;
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                      ((MVRuntimeDataVariable *)pAVar9,pOVar5,(MethodInfo *)0x0);
            *(undefined1 *)&pMVar2[7].fields._._.onLeave = 0;
          }
        }
        pIVar10 = MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
                 MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_FixedUpdate
                           ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)this_00,movementMap,
                            (MethodInfo *)0x0);
        return pIVar10;
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  pIVar10 = (IInputToPlayerMovement *)(*pcVar11)();
  return pIVar10;
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

