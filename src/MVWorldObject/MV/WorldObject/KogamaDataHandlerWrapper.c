
/* BytePacker GetBytePackerFromKogamaDataPackage(Int32, KogamaDataPackage, Boolean) */

BytePacker *
MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
KogamaDataHandlerWrapper_GetBytePackerFromKogamaDataPackage
          (int32_t serializeVersion,KogamaDataPackage *kogamaDataPackage,bool writeRuntimeData,
          MethodInfo *method)

{
  if (serializeVersion != 0xb) {
    return (BytePacker *)0x0;
  }
  pBVar1 = BytePackerFunctions::BytePackerFunctionsVersion11::
           BytePackerFunctionsVersion11_GetBytePackerFromKogamaDataPackage
                     (kogamaDataPackage,writeRuntimeData,(MethodInfo *)0x0);
  return pBVar1;
}


/* Dictionary`2[System.Object,System.Object] GetDataParameters(Int32, BytePacker, KogamaDataType,
   Boolean) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
KogamaDataHandlerWrapper_GetDataParameters
          (int32_t serializeVersion,BytePacker *bp,KogamaDataType__Enum kogamaDataType,
          bool readRuntimeData,MethodInfo *method)

{
  if (serializeVersion != 0xb) {
    return (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  pDVar1 = BytePackerFunctions::BytePackerFunctionsVersion11::
           BytePackerFunctionsVersion11_GetDataParameters
                     (bp,kogamaDataType,readRuntimeData,(MethodInfo *)0x0);
  return pDVar1;
}

