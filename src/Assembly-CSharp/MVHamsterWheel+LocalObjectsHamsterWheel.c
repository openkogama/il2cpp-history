
/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVHamsterWheel+LocalObjectsHamsterWheel::
MVHamsterWheel_LocalObjectsHamsterWheel_FixedUpdate
          (MVHamsterWheel_LocalObjectsHamsterWheel *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HamsterWheelMotor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVHamsterWheel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.vehicleMotor;
  pSVar2 = (SimpleVehicleMotorBase *)
            (*(this->klass->vtable).get_Owner.methodPtr)
                      (this,(this->klass->vtable).get_Owner.method);
  value = (SimpleVehicleMotorBase *)0x0;
  pSVar3 = value;
  if (pSVar2 != (SimpleVehicleMotorBase *)0x0) {
    bVar4 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
    if (((pSVar2->klass->_1).naturalAligment < bVar4) ||
       (bVar5 = true,
       (MVHamsterWheel__Class *)(pSVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
       TypeInfo__MVHamsterWheel)) {
      bVar5 = false;
    }
    pSVar3 = (SimpleVehicleMotorBase *)0x0;
    if (bVar5) {
      pSVar3 = pSVar2;
    }
  }
  if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
    bVar4 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
    if ((bVar4 <= (pSVar1->klass->_1).naturalAligment) &&
       ((pSVar1->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
        (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
      if (0.0 < (pSVar1->fields).DirectInputMoveMap.z) {
        if (pSVar3 == (SimpleVehicleMotorBase *)0x0) goto code_?;
        if (*(char *)&pSVar3[3].fields._.groundState == '\0') {
          pMVar6 = pSVar3[3].fields._._.worldObjectParent;
          cStackX_8 = '\x01';
          pOVar7 = (Object *)FUN_?(lRam_?,&cStackX_8);
          if (pMVar6 == (MVWorldObjectClient *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    ((MVRuntimeDataVariable *)pMVar6,pOVar7,(MethodInfo *)0x0);
          *(undefined1 *)&pSVar3[3].fields._.groundState = 1;
        }
      }
      if ((pSVar1->fields).DirectInputMoveMap.z <= 0.0) {
        if (pSVar3 == (SimpleVehicleMotorBase *)0x0) goto code_?;
        if (*(char *)&pSVar3[3].fields._.groundState != '\0') {
          pMVar6 = pSVar3[3].fields._._.worldObjectParent;
          cStackX_8 = '\0';
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               (pSVar2 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pSVar2 = (SimpleVehicleMotorBase *)FUN_?(lRam_?);
              FUN_?(&pSVar2->fields,&cStackX_8);
              if (iRam_? != 0) {
                uVar8 = (uint)((ulonglong)&pSVar2->fields >> 0xc);
                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar5 = uVar10 == *puVar11;
                  if (bVar5) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
            }
          }
          else {
            pSVar2 = (SimpleVehicleMotorBase *)((ulonglong)uStackX_9 << 8);
          }
          if (pMVar6 == (MVWorldObjectClient *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    ((MVRuntimeDataVariable *)pMVar6,(Object *)pSVar2,(MethodInfo *)0x0);
          *(undefined1 *)&pSVar3[3].fields._.groundState = 0;
        }
        pfVar12 = &(pSVar1->fields).DirectInputMoveMap.z;
        if (*pfVar12 <= 0.0 && *pfVar12 != 0.0) {
          if (pSVar3 == (SimpleVehicleMotorBase *)0x0) goto code_?;
          if (pSVar3[3].fields._.isPlayerControlled == 0) {
            pMVar13 = *(MVRuntimeDataVariable **)&pSVar3[3].fields._.weight;
            cStackX_8 = '\x01';
            pOVar7 = (Object *)FUN_?(lRam_?,&cStackX_8);
            if (pMVar13 == (MVRuntimeDataVariable *)0x0) goto code_?;
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar13,pOVar7,(MethodInfo *)0x0)
            ;
            pSVar3[3].fields._.isPlayerControlled = 1;
          }
        }
      }
      if (0.0 <= (pSVar1->fields).DirectInputMoveMap.z) {
        if (pSVar3 == (SimpleVehicleMotorBase *)0x0) goto code_?;
        if (pSVar3[3].fields._.isPlayerControlled != 0) {
          pMVar13 = *(MVRuntimeDataVariable **)&pSVar3[3].fields._.weight;
          cStackX_8 = '\0';
          if (*(int *)(lRam_? + 0x28) < 0) {
            if ((*(longlong *)(lRam_? + 0x60) == 0) ||
               (pSVar1 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
              pSVar1 = (SimpleVehicleMotorBase *)FUN_?(lRam_?);
              FUN_?(&pSVar1->fields,&cStackX_8);
              if (iRam_? != 0) {
                uVar8 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar5 = uVar10 == *puVar11;
                  if (bVar5) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
            }
          }
          else {
            pSVar1 = (SimpleVehicleMotorBase *)((ulonglong)uStackX_9 << 8);
          }
          if (pMVar13 == (MVRuntimeDataVariable *)0x0) goto code_?;
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar13,(Object *)pSVar1,(MethodInfo *)0x0);
          pSVar3[3].fields._.isPlayerControlled = 0;
        }
      }
      pSVar1 = (this->fields)._.vehicleMotor;
      if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
        bVar4 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
        if ((bVar4 <= (pSVar1->klass->_1).naturalAligment) &&
           ((pSVar1->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
          pSVar2 = value;
          if ((pSVar1->klass->_1).typeHierarchy
              [(ulonglong)(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1] ==
              (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
            pSVar2 = pSVar1;
          }
          cVar14 = (*(pSVar2->klass->vtable).get_Grounded.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable).get_Grounded.method);
          if (cVar14 != '\0') {
            if (pSVar3 == (SimpleVehicleMotorBase *)0x0) goto code_?;
            if (*(char *)&pSVar3[3].fields.impactState == '\0') {
              pMVar13 = (MVRuntimeDataVariable *)pSVar3[3].fields._.impulseVectors;
              cStackX_8 = '\x01';
              pOVar7 = (Object *)FUN_?(lRam_?,&cStackX_8);
              if (pMVar13 == (MVRuntimeDataVariable *)0x0) goto code_?;
              MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                        (pMVar13,pOVar7,(MethodInfo *)0x0);
              *(undefined1 *)&pSVar3[3].fields.impactState = 1;
            }
          }
          pSVar1 = (this->fields)._.vehicleMotor;
          if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
            bVar4 = (TypeInfo__HamsterWheelMotor->_1).naturalAligment;
            if ((bVar4 <= (pSVar1->klass->_1).naturalAligment) &&
               ((pSVar1->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
                (Il2CppClass *)TypeInfo__HamsterWheelMotor)) {
              pSVar2 = value;
              if ((pSVar1->klass->_1).typeHierarchy
                  [(ulonglong)(TypeInfo__HamsterWheelMotor->_1).naturalAligment - 1] ==
                  (Il2CppClass *)TypeInfo__HamsterWheelMotor) {
                pSVar2 = pSVar1;
              }
              cVar14 = (*(pSVar2->klass->vtable).get_Grounded.methodPtr)
                                 (pSVar2,(pSVar2->klass->vtable).get_Grounded.method);
              if (cVar14 == '\0') {
                if (pSVar3 == (SimpleVehicleMotorBase *)0x0) goto code_?;
                if (*(char *)&pSVar3[3].fields.impactState != '\0') {
                  pMVar13 = (MVRuntimeDataVariable *)pSVar3[3].fields._.impulseVectors;
                  cStackX_8 = cVar14;
                  if (*(int *)(lRam_? + 0x28) < 0) {
                    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                      value = (SimpleVehicleMotorBase *)FUN_?(lRam_?);
                      FUN_?(&value->fields,&cStackX_8);
                      if (iRam_? != 0) {
                        uVar8 = (uint)((ulonglong)&value->fields >> 0xc);
                        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                        do {
                          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                          LOCK();
                          bVar5 = uVar10 == *puVar11;
                          if (bVar5) {
                            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar5);
                      }
                    }
                  }
                  else {
                    value = (SimpleVehicleMotorBase *)((ulonglong)uStackX_9 << 8);
                  }
                  if (pMVar13 == (MVRuntimeDataVariable *)0x0) goto code_?;
                  MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                            (pMVar13,(Object *)value,(MethodInfo *)0x0);
                  *(undefined1 *)&pSVar3[3].fields.impactState = 0;
                }
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__IInputToPlayerMovement);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar1 = (this->fields)._.vehicleMotor;
              if (movementMap == (IInputToPlayerMovement *)0x0) {
                if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
                (pSVar1->fields).HandleInput = 0;
              }
              else {
                puVar15 = (undefined8 *)
                          FUN_?(auStack_16,0,TypeInfo__IInputToPlayerMovement,movementMap);
                fVar17 = *(float *)(puVar15 + 1);
                if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
                uVar18 = *puVar15;
                (pSVar1->fields).DirectInputMoveMap.x = (float)(int)uVar18;
                (pSVar1->fields).DirectInputMoveMap.y = (float)(int)((ulonglong)uVar18 >> 0x20);
                (pSVar1->fields).DirectInputMoveMap.z = fVar17;
                pSVar1 = (this->fields)._.vehicleMotor;
                bVar19 = FUN_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
                if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
                (pSVar1->fields).Jump = bVar19;
                pSVar1 = (this->fields)._.vehicleMotor;
                if (pSVar1 == (SimpleVehicleMotorBase *)0x0) goto code_?;
                (pSVar1->fields).HandleInput = 1;
              }
              pSVar1 = (this->fields)._.vehicleMotor;
              if (pSVar1 != (SimpleVehicleMotorBase *)0x0) {
                (*(pSVar1->klass->vtable).__unknown_3.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable).__unknown_3.method);
                return movementMap;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  pIVar21 = (IInputToPlayerMovement *)(*pcVar20)();
  return pIVar21;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVHamsterWheel+LocalObjectsHamsterWheel::
     MVHamsterWheel_LocalObjectsHamsterWheel_Leave
               (MVHamsterWheel_LocalObjectsHamsterWheel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVHamsterWheel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVSimpleOneSeatVehicle+LocalObjectsSimpleVehicle::
  MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle_Leave
            ((MVSimpleOneSeatVehicle_LocalObjectsSimpleVehicle *)this,(MethodInfo *)0x0);
  pOVar1 = (Object *)
            (*(this->klass->vtable).get_Owner.methodPtr)
                      (this,(this->klass->vtable).get_Owner.method);
  if (pOVar1 != (Object *)0x0) {
    bVar2 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
    if ((bVar2 <= (pOVar1->klass->_1).naturalAligment) &&
       (ppIVar3 = (pOVar1->klass->_1).typeHierarchy,
       (MVHamsterWheel__Class *)ppIVar3[(ulonglong)bVar2 - 1] == TypeInfo__MVHamsterWheel)) {
      pOVar4 = (Object *)0x0;
      pOStackX_8 = (Object *)((ulonglong)pOStackX_8 & 0xffffffffffffff00);
      pOVar5 = pOVar4;
      if ((MVHamsterWheel__Class *)
          ppIVar3[(ulonglong)(TypeInfo__MVHamsterWheel->_1).naturalAligment - 1] ==
          TypeInfo__MVHamsterWheel) {
        pOVar5 = pOVar1;
      }
      pOVar6 = pOVar5[0x1f].klass;
      pOVar1 = pOStackX_8;
      if ((*(int *)(lRam_? + 0x28) < 0) &&
         ((*(longlong *)(lRam_? + 0x60) == 0 ||
          (pOVar1 = pOVar4, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
        pOVar1 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar1 + 1,&pOStackX_8);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
          lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar10 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
      }
      if (pOVar6 != (Object__Class *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  ((MVRuntimeDataVariable *)pOVar6,pOVar1,(MethodInfo *)0x0);
        pOVar1 = (Object *)
                  (*(this->klass->vtable).get_Owner.methodPtr)
                            (this,(this->klass->vtable).get_Owner.method);
        lVar8 = lRam_?;
        if (pOVar1 != (Object *)0x0) {
          bVar2 = (TypeInfo__MVHamsterWheel->_1).naturalAligment;
          if ((bVar2 <= (pOVar1->klass->_1).naturalAligment) &&
             (ppIVar3 = (pOVar1->klass->_1).typeHierarchy,
             (MVHamsterWheel__Class *)ppIVar3[(ulonglong)bVar2 - 1] == TypeInfo__MVHamsterWheel)) {
            pOStackX_8 = (Object *)((ulonglong)pOStackX_8 & 0xffffffffffffff00);
            pOVar5 = pOVar4;
            if ((MVHamsterWheel__Class *)
                ppIVar3[(ulonglong)(TypeInfo__MVHamsterWheel->_1).naturalAligment - 1] ==
                TypeInfo__MVHamsterWheel) {
              pOVar5 = pOVar1;
            }
            pOVar6 = pOVar5[0x20].klass;
            pOVar1 = pOStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) &&
               ((*(longlong *)(lRam_? + 0x60) == 0 ||
                (pOVar1 = pOVar4, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              pOVar1 = (Object *)FUN_?(lRam_?);
              FUN_?(pOVar1 + 1,&pOStackX_8,(longlong)*(int *)(lVar8 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar7 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
                lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
                do {
                  uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                  puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                  LOCK();
                  bVar11 = uVar9 == *puVar10;
                  if (bVar11) {
                    *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar11);
              }
            }
            if (pOVar6 != (Object__Class *)0x0) {
              pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                                  (pOVar1,(MethodInfo *)0x0);
              bVar11 = iRam_? != 0;
              pOVar1 = (Object *)(pOVar6->_0).namespaze;
              (pOVar6->_0).namespaze = (char *)pOVar5;
              if (bVar11) {
                uVar7 = (uint)((ulonglong)&(pOVar6->_0).namespaze >> 0xc);
                puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar12 = *puVar10;
                  LOCK();
                  uVar9 = *puVar10;
                  if (uVar12 == uVar9) {
                    *puVar10 = uVar12 | 1L << (uVar7 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar12 != uVar9);
              }
              if (pOVar1 != pOVar5) {
                lVar8._0_2_ = (pOVar6->_0).this_arg.attrs;
                lVar8._2_1_ = (pOVar6->_0).this_arg.type;
                lVar8._3_5_ = *(undefined5 *)&(pOVar6->_0).this_arg.field_0xb;
                if (lVar8 != 0) {
                  lVar8 = *(longlong *)&(pOVar6->_0).this_arg.attrs;
                  pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                      ((Object *)(pOVar6->_0).namespaze,(MethodInfo *)0x0);
                  (**(code **)(lVar8 + 0x18))
                            (*(undefined8 *)(lVar8 + 0x40),pOVar1,*(undefined8 *)(lVar8 + 0x28),
                             *(code **)(lVar8 + 0x18),unaff_RDI);
                }
                if ((*(char *)&(pOVar6->_0).this_arg.data != '\0') &&
                   ((pOVar6->_0).element_class != (Il2CppClass *)0x0)) {
                  pIVar13 = (pOVar6->_0).element_class;
                  pOVar1 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                      ((Object *)(pOVar6->_0).namespaze,(MethodInfo *)0x0);
                  uVar14._0_2_ = (pIVar13->byval_arg).attrs;
                  uVar14._2_1_ = (pIVar13->byval_arg).type;
                  uVar14._3_5_ = *(undefined5 *)&(pIVar13->byval_arg).field_0xb;
                  (*(code *)pIVar13->namespaze)(pIVar13->element_class,pOVar1,uVar14);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

