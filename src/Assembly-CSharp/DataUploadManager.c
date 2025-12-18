
/* Void HandleDone() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_HandleDone(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DataUploadManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__DataUploadManager->static_fields->id =
       TypeInfo__DataUploadManager->static_fields->id + 1;
  TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__DataUploadManager->static_fields->bytePacker >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (TypeInfo__DataUploadManager->static_fields->doneNotification != (UnityAction *)0x0) {
    pUVar6 = TypeInfo__DataUploadManager->static_fields->doneNotification;
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
    TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__DataUploadManager->static_fields->doneNotification >> 0xc
                    );
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  return;
}


/* Void OnUploadBytes() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_OnUploadBytes(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DataUploadManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker;
  if (pBVar1 != (BytePacker *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (pBVar1->fields)._buffer;
    if ((pLVar2 != (List_1_System_Byte_ *)0x0) &&
       (pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker,
       pBVar1 != (BytePacker *)0x0)) {
      if ((pLVar2->fields)._size == (pBVar1->fields)._position) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DataUploadManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        TypeInfo__DataUploadManager->static_fields->id =
             TypeInfo__DataUploadManager->static_fields->id + 1;
        TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__DataUploadManager->static_fields->bytePacker >> 0xc)
          ;
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        if (TypeInfo__DataUploadManager->static_fields->doneNotification != (UnityAction *)0x0) {
          pUVar8 = TypeInfo__DataUploadManager->static_fields->doneNotification;
          (*(pUVar8->fields)._._.invoke_impl)
                    ((pUVar8->fields)._._.method_code,(pUVar8->fields)._._.method);
          TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&TypeInfo__DataUploadManager->static_fields->doneNotification
                           >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar7 = uVar5 == *puVar6;
              if (bVar7) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
        }
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__DataUploadManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      count = 5000;
      pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker;
      if (pBVar1 != (BytePacker *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__)
          ;
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar2 = (pBVar1->fields)._buffer;
        if ((pLVar2 != (List_1_System_Byte_ *)0x0) &&
           (pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker,
           pBVar1 != (BytePacker *)0x0)) {
          if ((pLVar2->fields)._size - (pBVar1->fields)._position < 5000) {
            pBVar9 = TypeInfo__DataUploadManager->static_fields->bytePacker;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar2 = (pBVar9->fields)._buffer;
            if ((pLVar2 == (List_1_System_Byte_ *)0x0) ||
               (pBVar9 = TypeInfo__DataUploadManager->static_fields->bytePacker,
               pBVar9 == (BytePacker *)0x0)) goto code_?;
            count = (pLVar2->fields)._size - (pBVar9->fields)._position;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar10 != (MVGameControllerBase *)0x0) &&
             (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) {
            pMVar12 = (pMVar11->fields).operationRequests;
            pBVar9 = TypeInfo__DataUploadManager->static_fields->bytePacker;
            iVar13 = TypeInfo__DataUploadManager->static_fields->id;
            if ((pBVar9 != (BytePacker *)0x0) &&
               (value = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                                  (pBVar9,count,(MethodInfo *)0x0),
               pMVar12 != (MVNetworkGame_OperationRequests *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this = (Dictionary_2_System_Byte_System_Object_ *)
                     FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                  );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        (this,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              aiStackX_10[0] = iVar13;
              value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
              if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                uVar14 = CONCAT71((int7)((ulonglong)pBVar1 >> 8),2);
                method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            ->klass->rgctx_data[0x22].method;
                uVar15 = (undefined7)((ulonglong)method_00 >> 8);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this,0xc1,value_00,(InsertionBehavior__Enum)uVar14,method_00);
                uVar16 = CONCAT71(uVar15,0xf5);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          (this,0xf5,(Object *)value,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar14 >> 8),2),
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                           ->klass->rgctx_data[0x22].method);
                pPVar17 = (pMVar12->fields).peer;
                if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0)
                {
                  FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                if (pPVar17 != (PhotonPeer *)0x0) {
                  (*(pPVar17->klass->vtable).SendOperation.methodPtr)
                            (pPVar17,CONCAT71((int7)((ulonglong)uVar16 >> 8),0x3f),this,
                             TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                             SendReliable,(pPVar17->klass->vtable).SendOperation.method);
                  return;
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DataUploadManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__DataUploadManager->static_fields->id = 0;
  TypeInfo__DataUploadManager->static_fields->bytePacker = (BytePacker *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__DataUploadManager->static_fields->bytePacker >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__DataUploadManager->static_fields->doneNotification = (UnityAction *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__DataUploadManager->static_fields->doneNotification >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}


/* Void SendChunk() */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_SendChunk(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DataUploadManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  count = 5000;
  pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker;
  if (pBVar1 != (BytePacker *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (pBVar1->fields)._buffer;
    if ((pLVar2 != (List_1_System_Byte_ *)0x0) &&
       (pBVar1 = TypeInfo__DataUploadManager->static_fields->bytePacker,
       pBVar1 != (BytePacker *)0x0)) {
      if ((pLVar2->fields)._size - (pBVar1->fields)._position < 5000) {
        pBVar3 = TypeInfo__DataUploadManager->static_fields->bytePacker;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Count__)
          ;
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar2 = (pBVar3->fields)._buffer;
        if ((pLVar2 == (List_1_System_Byte_ *)0x0) ||
           (pBVar3 = TypeInfo__DataUploadManager->static_fields->bytePacker,
           pBVar3 == (BytePacker *)0x0)) goto code_?;
        count = (pLVar2->fields)._size - (pBVar3->fields)._position;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar4 != (MVGameControllerBase *)0x0) &&
         (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) {
        pMVar6 = (pMVar5->fields).operationRequests;
        pBVar3 = TypeInfo__DataUploadManager->static_fields->bytePacker;
        iVar7 = TypeInfo__DataUploadManager->static_fields->id;
        if (pBVar3 != (BytePacker *)0x0) {
          value = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadBytes
                            (pBVar3,count,(MethodInfo *)0x0);
          if (pMVar6 != (MVNetworkGame_OperationRequests *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this = (Dictionary_2_System_Byte_System_Object_ *)
                   FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object___ctor
                      (this,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                      );
            aiStackX_10[0] = iVar7;
            value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
            if (this != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
              uVar8 = CONCAT71((int7)((ulonglong)pBVar1 >> 8),2);
              method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                          ->klass->rgctx_data[0x22].method;
              uVar9 = (undefined7)((ulonglong)method_00 >> 8);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (this,0xc1,value_00,(InsertionBehavior__Enum)uVar8,method_00);
              uVar10 = CONCAT71(uVar9,0xf5);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__TryInsert
                        (this,0xf5,(Object *)value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pPVar11 = (pMVar6->fields).peer;
              if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
              }
              if (pPVar11 != (PhotonPeer *)0x0) {
                (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                          (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x3f),this,
                           TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable,(pPVar11->klass->vtable).SendOperation.method);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UploadData(Byte[], UnityAction) */

void Assembly-CSharp.dll::DataUploadManager::DataUploadManager_UploadData
               (Byte__Array *data,UnityAction *doneNotification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DataUploadManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DataUpload_already_in_progress);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UploadData_called_even_though_us);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_UploadData_called_even_though_us,(MethodInfo *)0x0);
  return;
}

