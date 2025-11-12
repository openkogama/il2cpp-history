
/* Void SynchronizeEmoteUpdate(Int32) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarLimbDataManagerLocal::
     AvatarLimbManagerLocal_AvatarLimbDataManagerLocal_SynchronizeEmoteUpdate
               (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *this,int32_t newEmote,
               MethodInfo *method)

{
  pLVar1 = (this->fields).limbRotationRuntimeData;
  if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
    pMVar2 = (pLVar1->fields).Emote;
    aiStackX_8[0] = newEmote;
    pOVar3 = (Object *)FUN_?(uRam_?,aiStackX_8);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                          (pOVar3,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      pOVar3 = (pMVar2->fields).value;
      (pMVar2->fields).value = pOVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar2->fields).value >> 0xc);
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
      if (pOVar3 != pOVar4) {
        if ((pMVar2->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar10 = (pMVar2->fields).OnChange;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                             ((pMVar2->fields).value,(MethodInfo *)0x0);
          (*(pMVar10->fields)._._.invoke_impl)
                    ((pMVar10->fields)._._.method_code,pOVar3,(pMVar10->fields)._._.method);
        }
        if (((pMVar2->fields).writeThrough != 0) &&
           ((pMVar2->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
        {
          pMVar11 = (pMVar2->fields).OnWriteThrough;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                             ((pMVar2->fields).value,(MethodInfo *)0x0);
          (*(pMVar11->fields)._._.invoke_impl)
                    ((pMVar11->fields)._._.method_code,pOVar3,(pMVar11->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SynchronizeHasHandEquippableUpdate(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarLimbDataManagerLocal::
     AvatarLimbManagerLocal_AvatarLimbDataManagerLocal_SynchronizeHasHandEquippableUpdate
               (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *this,
               bool newIsPoingtingWeaponValue,MethodInfo *method)

{
  pLVar1 = (this->fields).limbRotationRuntimeData;
  if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
    pMVar2 = (pLVar1->fields).HasHandEquippableItem;
    abStackX_8[0] = newIsPoingtingWeaponValue;
    pOVar3 = (Object *)FUN_?(uRam_?,abStackX_8);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      pOVar4 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                          (pOVar3,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      pOVar3 = (pMVar2->fields).value;
      (pMVar2->fields).value = pOVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pMVar2->fields).value >> 0xc);
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
      if (pOVar3 != pOVar4) {
        if ((pMVar2->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          pMVar10 = (pMVar2->fields).OnChange;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                             ((pMVar2->fields).value,(MethodInfo *)0x0);
          (*(pMVar10->fields)._._.invoke_impl)
                    ((pMVar10->fields)._._.method_code,pOVar3,(pMVar10->fields)._._.method);
        }
        if (((pMVar2->fields).writeThrough != 0) &&
           ((pMVar2->fields).OnWriteThrough != (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0))
        {
          pMVar11 = (pMVar2->fields).OnWriteThrough;
          pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                             ((pMVar2->fields).value,(MethodInfo *)0x0);
          (*(pMVar11->fields)._._.invoke_impl)
                    ((pMVar11->fields)._._.method_code,pOVar3,(pMVar11->fields)._._.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SynchronizeHeadRotationUpdate(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarLimbDataManagerLocal::
     AvatarLimbManagerLocal_AvatarLimbDataManagerLocal_SynchronizeHeadRotationUpdate
               (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *this,Quaternion *newHeadRotation,
               MethodInfo *method)

{
  pLVar1 = (this->fields).limbRotationRuntimeData;
  if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
    pMVar2 = (pLVar1->fields).HeadRotationYaw;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_4,newHeadRotation,method);
    afStackX_8[0] = pVVar3->y;
    pOVar5 = (Object *)FUN_?(uRam_?,afStackX_8);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      method_00 = (MethodInfo *)0x0;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar2,pOVar5,(MethodInfo *)0x0);
      pLVar1 = (this->fields).limbRotationRuntimeData;
      if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
        pMVar2 = (pLVar1->fields).HeadRotationPitch;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_4,newHeadRotation,method_00);
        afStackX_8[0] = pVVar3->x;
        pOVar5 = (Object *)FUN_?(uRam_?,afStackX_8);
        if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
          pOVar6 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                              (pOVar5,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          pOVar5 = (pMVar2->fields).value;
          (pMVar2->fields).value = pOVar6;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(pMVar2->fields).value >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          if (pOVar5 != pOVar6) {
            if ((pMVar2->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              pMVar12 = (pMVar2->fields).OnChange;
              pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                  ((pMVar2->fields).value,(MethodInfo *)0x0);
              (*(pMVar12->fields)._._.invoke_impl)
                        ((pMVar12->fields)._._.method_code,pOVar5,(pMVar12->fields)._._.method);
            }
            if (((pMVar2->fields).writeThrough != 0) &&
               ((pMVar2->fields).OnWriteThrough !=
                (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
              pMVar13 = (pMVar2->fields).OnWriteThrough;
              pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                  ((pMVar2->fields).value,(MethodInfo *)0x0);
              (*(pMVar13->fields)._._.invoke_impl)
                        ((pMVar13->fields)._._.method_code,pOVar5,(pMVar13->fields)._._.method);
            }
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SynchronizePointRotationUpdate(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarLimbDataManagerLocal::
     AvatarLimbManagerLocal_AvatarLimbDataManagerLocal_SynchronizePointRotationUpdate
               (AvatarLimbManagerLocal_AvatarLimbDataManagerLocal *this,Quaternion *newPointRotation
               ,MethodInfo *method)

{
  pLVar1 = (this->fields).limbRotationRuntimeData;
  if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
    pMVar2 = (pLVar1->fields).PointRotationYaw;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_4,newPointRotation,method);
    afStackX_8[0] = pVVar3->y;
    pOVar5 = (Object *)FUN_?(uRam_?,afStackX_8);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      method_00 = (MethodInfo *)0x0;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar2,pOVar5,(MethodInfo *)0x0);
      pLVar1 = (this->fields).limbRotationRuntimeData;
      if (pLVar1 != (LimbRotationRuntimeData *)0x0) {
        pMVar2 = (pLVar1->fields).PointRotationPitch;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_4,newPointRotation,method_00);
        afStackX_8[0] = pVVar3->x;
        pOVar5 = (Object *)FUN_?(uRam_?,afStackX_8);
        if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
          pOVar6 = ObscuredTypesConverter::ObscuredTypesConverter_CreateObscuredValue
                              (pOVar5,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          pOVar5 = (pMVar2->fields).value;
          (pMVar2->fields).value = pOVar6;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(pMVar2->fields).value >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          if (pOVar5 != pOVar6) {
            if ((pMVar2->fields).OnChange != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              pMVar12 = (pMVar2->fields).OnChange;
              pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                  ((pMVar2->fields).value,(MethodInfo *)0x0);
              (*(pMVar12->fields)._._.invoke_impl)
                        ((pMVar12->fields)._._.method_code,pOVar5,(pMVar12->fields)._._.method);
            }
            if (((pMVar2->fields).writeThrough != 0) &&
               ((pMVar2->fields).OnWriteThrough !=
                (MVRuntimeDataVariable_OnWriteThroughDelegate *)0x0)) {
              pMVar13 = (pMVar2->fields).OnWriteThrough;
              pOVar5 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                  ((pMVar2->fields).value,(MethodInfo *)0x0);
              (*(pMVar13->fields)._._.invoke_impl)
                        ((pMVar13->fields)._._.method_code,pOVar5,(pMVar13->fields)._._.method);
            }
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

