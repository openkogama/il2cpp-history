
/* DoorData+Keys() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::MVDoor::DoorData+Keys::
     DoorData_Keys__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ToggleTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BeginOpen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DocType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OpenAt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_IsOpen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ReverseOpenDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DoorType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayersCanOpen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CloseAt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->Name =
       StringLiteral_Name;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                   static_fields >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->BeginOpen =
       StringLiteral_BeginOpen;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->BeginOpen >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->PlayersCanOpen
       = StringLiteral_PlayersCanOpen;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->PlayersCanOpen >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
  ReverseOpenDirection = StringLiteral_ReverseOpenDirection;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->ReverseOpenDirection >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->OpenValue =
       StringLiteral_OpenAt;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->OpenValue >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->CloseValue =
       StringLiteral_CloseAt;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->CloseValue >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->ToggleTime =
       StringLiteral_ToggleTime;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->ToggleTime >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->DoorType =
       StringLiteral_DoorType;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->DoorType >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->DocType =
       StringLiteral_DocType;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->DocType >> 0xc);
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
  TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->IsOpen =
       StringLiteral_IsOpen;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                    static_fields->IsOpen >> 0xc);
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

