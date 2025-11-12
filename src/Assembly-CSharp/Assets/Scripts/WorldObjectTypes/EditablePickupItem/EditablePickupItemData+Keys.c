
/* List`1[System.String] GetKeys() */

List_1_System_String_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
EditablePickupItemData+Keys::EditablePickupItemData_Keys_GetKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MaxAmmo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffectVolume);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
  pSVar3 = StringLiteral_Name;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    piVar4 = &(pLVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    pSVar5 = (pLVar1->fields)._items;
    if (pSVar5 != (String__Array *)0x0) {
      uVar6 = (pLVar1->fields)._size;
      if (uVar6 < (uint)pSVar5->max_length) {
        (pLVar1->fields)._size = uVar6 + 1;
        FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                   pMVar2->klass->rgctx_data[0xe].method);
      }
      pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
      pSVar3 = StringLiteral_Damage;
      piVar4 = &(pLVar1->fields)._version;
      *piVar4 = *piVar4 + 1;
      pSVar5 = (pLVar1->fields)._items;
      if (pSVar5 != (String__Array *)0x0) {
        uVar6 = (pLVar1->fields)._size;
        if (uVar6 < (uint)pSVar5->max_length) {
          (pLVar1->fields)._size = uVar6 + 1;
          FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                     pMVar2->klass->rgctx_data[0xe].method);
        }
        pMVar2 = MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
        ;
        pSVar3 = StringLiteral_MaxAmmo;
        piVar4 = &(pLVar1->fields)._version;
        *piVar4 = *piVar4 + 1;
        pSVar5 = (pLVar1->fields)._items;
        if (pSVar5 != (String__Array *)0x0) {
          uVar6 = (pLVar1->fields)._size;
          if (uVar6 < (uint)pSVar5->max_length) {
            (pLVar1->fields)._size = uVar6 + 1;
            FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                       pMVar2->klass->rgctx_data[0xe].method);
          }
          pMVar2 = 
          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
          pSVar3 = StringLiteral_ImpulseStrength;
          piVar4 = &(pLVar1->fields)._version;
          *piVar4 = *piVar4 + 1;
          pSVar5 = (pLVar1->fields)._items;
          if (pSVar5 != (String__Array *)0x0) {
            uVar6 = (pLVar1->fields)._size;
            if (uVar6 < (uint)pSVar5->max_length) {
              (pLVar1->fields)._size = uVar6 + 1;
              FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                         pMVar2->klass->rgctx_data[0xe].method);
            }
            pMVar2 = 
            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
            pSVar3 = StringLiteral_RecoilStrength;
            piVar4 = &(pLVar1->fields)._version;
            *piVar4 = *piVar4 + 1;
            pSVar5 = (pLVar1->fields)._items;
            if (pSVar5 != (String__Array *)0x0) {
              uVar6 = (pLVar1->fields)._size;
              if (uVar6 < (uint)pSVar5->max_length) {
                (pLVar1->fields)._size = uVar6 + 1;
                FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__AddWithResize
                          ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                           pMVar2->klass->rgctx_data[0xe].method);
              }
              pMVar2 = 
              MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
              pSVar3 = StringLiteral_AttackAnimationTime;
              piVar4 = &(pLVar1->fields)._version;
              *piVar4 = *piVar4 + 1;
              pSVar5 = (pLVar1->fields)._items;
              if (pSVar5 != (String__Array *)0x0) {
                uVar6 = (pLVar1->fields)._size;
                if (uVar6 < (uint)pSVar5->max_length) {
                  (pLVar1->fields)._size = uVar6 + 1;
                  FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__AddWithResize
                            ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                             pMVar2->klass->rgctx_data[0xe].method);
                }
                pMVar2 = 
                MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
                pSVar3 = StringLiteral_AttackCooldown;
                piVar4 = &(pLVar1->fields)._version;
                *piVar4 = *piVar4 + 1;
                pSVar5 = (pLVar1->fields)._items;
                if (pSVar5 != (String__Array *)0x0) {
                  uVar6 = (pLVar1->fields)._size;
                  if (uVar6 < (uint)pSVar5->max_length) {
                    (pLVar1->fields)._size = uVar6 + 1;
                    FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__AddWithResize
                              ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                               pMVar2->klass->rgctx_data[0xe].method);
                  }
                  pMVar2 = 
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                  ;
                  pSVar3 = StringLiteral_Range;
                  piVar4 = &(pLVar1->fields)._version;
                  *piVar4 = *piVar4 + 1;
                  pSVar5 = (pLVar1->fields)._items;
                  if (pSVar5 != (String__Array *)0x0) {
                    uVar6 = (pLVar1->fields)._size;
                    if (uVar6 < (uint)pSVar5->max_length) {
                      (pLVar1->fields)._size = uVar6 + 1;
                      FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__AddWithResize
                                ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                                 pMVar2->klass->rgctx_data[0xe].method);
                    }
                    pSVar3 = StringLiteral_Radius;
                    pMVar2 = 
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                    ;
                    piVar4 = &(pLVar1->fields)._version;
                    *piVar4 = *piVar4 + 1;
                    pSVar5 = (pLVar1->fields)._items;
                    if (pSVar5 != (String__Array *)0x0) {
                      uVar6 = (pLVar1->fields)._size;
                      if (uVar6 < (uint)pSVar5->max_length) {
                        (pLVar1->fields)._size = uVar6 + 1;
                        FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__AddWithResize
                                  ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                                   pMVar2->klass->rgctx_data[0xe].method);
                      }
                      pMVar2 = 
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                      ;
                      pSVar3 = StringLiteral_FireSoundEffect;
                      piVar4 = &(pLVar1->fields)._version;
                      *piVar4 = *piVar4 + 1;
                      pSVar5 = (pLVar1->fields)._items;
                      if (pSVar5 != (String__Array *)0x0) {
                        uVar6 = (pLVar1->fields)._size;
                        if (uVar6 < (uint)pSVar5->max_length) {
                          (pLVar1->fields)._size = uVar6 + 1;
                          FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                        }
                        else {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__AddWithResize
                                    ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                                     pMVar2->klass->rgctx_data[0xe].method);
                        }
                        pMVar2 = 
                        MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                        ;
                        pSVar3 = StringLiteral_FireSoundEffectVolume;
                        piVar4 = &(pLVar1->fields)._version;
                        *piVar4 = *piVar4 + 1;
                        pSVar5 = (pLVar1->fields)._items;
                        if (pSVar5 != (String__Array *)0x0) {
                          uVar6 = (pLVar1->fields)._size;
                          if (uVar6 < (uint)pSVar5->max_length) {
                            (pLVar1->fields)._size = uVar6 + 1;
                            FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                          }
                          else {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                            List_1_System_Object__AddWithResize
                                      ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                                       pMVar2->klass->rgctx_data[0xe].method);
                          }
                          pMVar2 = 
                          MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                          ;
                          pSVar3 = StringLiteral_HitSoundEffect;
                          piVar4 = &(pLVar1->fields)._version;
                          *piVar4 = *piVar4 + 1;
                          pSVar5 = (pLVar1->fields)._items;
                          if (pSVar5 != (String__Array *)0x0) {
                            uVar6 = (pLVar1->fields)._size;
                            if (uVar6 < (uint)pSVar5->max_length) {
                              (pLVar1->fields)._size = uVar6 + 1;
                              FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                            }
                            else {
                              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                              List_1_System_Object__AddWithResize
                                        ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                                         pMVar2->klass->rgctx_data[0xe].method);
                            }
                            pMVar2 = 
                            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                            ;
                            pSVar3 = StringLiteral_HitSoundEffectVolume;
                            piVar4 = &(pLVar1->fields)._version;
                            *piVar4 = *piVar4 + 1;
                            pSVar5 = (pLVar1->fields)._items;
                            if (pSVar5 != (String__Array *)0x0) {
                              uVar6 = (pLVar1->fields)._size;
                              if ((uint)pSVar5->max_length <= uVar6) {
                                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                                List_1_System_Object__AddWithResize
                                          ((List_1_System_Object_ *)pLVar1,(Object *)pSVar3,
                                           pMVar2->klass->rgctx_data[0xe].method);
                                return pLVar1;
                              }
                              (pLVar1->fields)._size = uVar6 + 1;
                              FUN_?(pSVar5,(longlong)(int)uVar6,pSVar3);
                              return pLVar1;
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  pLVar1 = (List_1_System_String_ *)(*pcVar7)();
  return pLVar1;
}

