
/* Void Attach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Attach
               (VehicleSeatBase *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).UnequipVehicleUser != 0) {
    if ((avatar == (MVAvatar *)0x0) ||
       (this_00 = (avatar->fields)._._.gameObject, this_00 == (GameObject *)0x0)) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
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
    if (pOVar2 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        pOVar3 = pOVar2->klass;
        uVar4._0_2_ = pOVar3[1]._0.this_arg.attrs;
        uVar4._2_1_ = pOVar3[1]._0.this_arg.type;
        uVar4._3_5_ = *(undefined5 *)&pOVar3[1]._0.this_arg.field_0xb;
        (*(code *)pOVar3[1]._0.this_arg.data)(pOVar2,uVar4);
      }
    }
  }
  bVar5 = iRam_? != 0;
  (this->fields).owner = avatar;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).owner >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  (this->fields)._IsOccupied_k__BackingField = 1;
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Awake
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    bVar1 = iRam_? != 0;
    (this->fields).seatCamera = (this->fields).DesktopCamera;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).seatCamera >> 0xc);
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
      return;
    }
  }
  else {
    bVar1 = iRam_? != 0;
    (this->fields).seatCamera = (this->fields).AndroidCamera;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).seatCamera >> 0xc);
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
  }
  return;
}


/* Void Detach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_Detach
               (VehicleSeatBase *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).UnequipVehicleUser != 0) {
    if ((avatar == (MVAvatar *)0x0) ||
       (this_00 = (avatar->fields)._._.gameObject, this_00 == (GameObject *)0x0)) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
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
    if (pOVar2 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar2[1].klass != (Object__Class *)0x0) {
        (*(code *)pOVar2->klass[1]._0.element_class)(pOVar2,pOVar2->klass[1]._0.castClass);
      }
    }
  }
  (this->fields)._IsOccupied_k__BackingField = 0;
  return;
}


/* Void RemoveCamera() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_RemoveCamera
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Camera_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).seatCamera;
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
  if (pMVar1 != (MVCameraBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar2 = (this->fields).owner;
      if (pMVar2 != (MVAvatar *)0x0) {
        pAVar3 = (pMVar2->fields).avatar;
        if (pAVar3 != (Avatar *)0x0) {
          bVar4 = (TypeInfo__AvatarLocal->_1).naturalAligment;
          if (((pAVar3->klass->_1).naturalAligment < bVar4) ||
             ((pAVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
              (Il2CppClass *)TypeInfo__AvatarLocal)) {
            FUN_?(pAVar3);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pAVar6 = pAVar3[1].klass;
          if (pAVar6 != (Avatar__Class *)0x0) {
            pMVar1 = (this->fields).seatCamera;
            pIVar7 = (pAVar6->_0).image;
            uVar8 = 0;
            uVar9 = *(ushort *)((longlong)&pIVar7[4].nameNoExt + 6);
            if (uVar9 != 0) {
              do {
                if (*(IAvatarCameraController__Class **)
                     (*(longlong *)&pIVar7[2].customAttributeCount + (ulonglong)uVar8 * 0x10) ==
                    TypeInfo__IAvatarCameraController) {
                  puVar10 = &pIVar7[4].typeCount +
                            (longlong)
                            (*(int *)(*(longlong *)&pIVar7[2].customAttributeCount + 8 +
                                     (ulonglong)uVar8 * 0x10) + 7) * 4;
                  goto code_?;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar9);
            }
            puVar10 = (uint32_t *)
                      FUN_?(pAVar6,TypeInfo__IAvatarCameraController,7,pMVar1,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)puVar10)(pAVar6,pMVar1,*(undefined8 *)(puVar10 + 2),*(code **)puVar10);
            return;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar11 = StringLiteral_Camera_is_null;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar12 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar12 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar12,2,pSVar11);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCamera() */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_SetCamera
               (VehicleSeatBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IAvatarCameraController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IVehicleCamera);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Camera_is_null);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).seatCamera;
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
  if (pMVar1 != (MVCameraBase *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__IVehicleCamera;
    if ((pMVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).seatCamera;
      pMVar3 = (this->fields).owner;
      if (pMVar1 != (MVCameraBase *)0x0) {
        lVar4 = FUN_?(pMVar1,TypeInfo__IVehicleCamera);
        pIVar5 = TypeInfo__IVehicleCamera;
        if (lVar4 == 0) {
          FUN_?(pMVar1,pIVar2);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pMVar3 != (MVAvatar *)0x0) {
          bVar7 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
          if (((pMVar3->klass->_1).naturalAligment < bVar7) ||
             ((MVAvatarLocal__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
              TypeInfo__MVAvatarLocal)) {
            FUN_?(pMVar3);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar4 = FUN_?(pMVar1,TypeInfo__IVehicleCamera);
        if (lVar4 == 0) {
          FUN_?(pMVar1,pIVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FUN_?(2,TypeInfo__IVehicleCamera,lVar4,pMVar3);
        pMVar3 = (this->fields).owner;
        if (pMVar3 != (MVAvatar *)0x0) {
          pAVar8 = (pMVar3->fields).avatar;
          if (pAVar8 != (Avatar *)0x0) {
            bVar7 = (TypeInfo__AvatarLocal->_1).naturalAligment;
            if (((pAVar8->klass->_1).naturalAligment < bVar7) ||
               ((pAVar8->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
                (Il2CppClass *)TypeInfo__AvatarLocal)) {
              FUN_?(pAVar8);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pAVar9 = pAVar8[1].klass;
            if (pAVar9 != (Avatar__Class *)0x0) {
              pMVar1 = (this->fields).seatCamera;
              pIVar10 = (pAVar9->_0).image;
              uVar11 = 0;
              uVar12 = *(ushort *)((longlong)&pIVar10[4].nameNoExt + 6);
              if (uVar12 != 0) {
                do {
                  if (*(IAvatarCameraController__Class **)
                       (*(longlong *)&pIVar10[2].customAttributeCount + (ulonglong)uVar11 * 0x10) ==
                      TypeInfo__IAvatarCameraController) {
                    puVar13 = &pIVar10[4].typeCount +
                              (longlong)
                              (*(int *)(*(longlong *)&pIVar10[2].customAttributeCount + 8 +
                                       (ulonglong)uVar11 * 0x10) + 5) * 4;
                    goto code_?;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar12);
              }
              puVar13 = (uint32_t *)
                        FUN_?(pAVar9,TypeInfo__IAvatarCameraController,5,pMVar1,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)puVar13)(pAVar9,pMVar1,*(undefined8 *)(puVar13 + 2),*(code **)puVar13);
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar14 = StringLiteral_Camera_is_null;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar15 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar15 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar15,2,pSVar14);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_SeatID(Int32) */

void Assembly-CSharp.dll::VehicleSeatBase::VehicleSeatBase_set_SeatID
               (VehicleSeatBase *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_re_set_seatID);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).seatID == -1) {
    (this->fields).seatID = value;
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Trying_to_re_set_seatID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

