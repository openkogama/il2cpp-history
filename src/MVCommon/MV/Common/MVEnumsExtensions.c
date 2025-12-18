
/* String ToTitle(List`1[MV.Common.PlanetPermissionType]) */

String * MVCommon.dll::MV::Common::MVEnumsExtensions::MVEnumsExtensions_ToTitle
                   (List_1_MV_Common_PlanetPermissionType_ *planetPermissionTypes,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                  ,(char)method);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Playtester);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Publisher);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Inventory_manager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Editor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Spectator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_User_admin);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Builder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((planetPermissionTypes == (List_1_MV_Common_PlanetPermissionType_ *)0x0) ||
     ((planetPermissionTypes->fields)._size == 0)) {
    return ::StringLiteral__;
  }
  iVar1 = FUN_?(planetPermissionTypes,0x14,
                        MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                        ->klass->rgctx_data[0x17].rgctxDataDummy);
  if (iVar1 != -1) {
    return StringLiteral_Publisher;
  }
  if ((planetPermissionTypes->fields)._size != 0) {
    iVar1 = FUN_?(planetPermissionTypes,0x12,
                          MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                          ->klass->rgctx_data[0x17].rgctxDataDummy);
    if (iVar1 != -1) {
      cVar2 = FUN_?(planetPermissionTypes,0x13);
      if (cVar2 != '\0') {
        return StringLiteral_Editor;
      }
    }
  }
  cVar2 = FUN_?(planetPermissionTypes,0x13);
  if (cVar2 == '\0') {
    cVar2 = FUN_?(planetPermissionTypes,0x12);
    if (cVar2 != '\0') {
      return StringLiteral_Builder;
    }
    cVar2 = FUN_?(planetPermissionTypes,0x16);
    if (cVar2 == '\0') {
      cVar2 = FUN_?(planetPermissionTypes,0x11);
      if (cVar2 == '\0') {
        cVar2 = FUN_?(planetPermissionTypes,0x10);
        pSVar3 = StringLiteral_Spectator;
        if (cVar2 == '\0') {
          pSVar3 = ::StringLiteral__;
        }
        return pSVar3;
      }
      return StringLiteral_Playtester;
    }
    return StringLiteral_User_admin;
  }
  return StringLiteral_Inventory_manager;
}

