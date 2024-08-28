
/* GamePassProgressionDataObjectShared() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared::GamePassProgressionDataObjectShared__ctor
               (GamePassProgressionDataObjectShared *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                   );
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectShared_XPTierRewards *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                           );
  GamePassProgressionDataObjectShared+XPTierRewards::
  GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  ((GamePassProgressionDataObjectShared__Fields *)method_00)->xpTierRewards = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* GamePassProgressionDataObjectShared(GamePassProgressionDataObjectShared+XPTierRewards) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassProgressionDataObject::
     GamePassProgressionDataObjectShared::GamePassProgressionDataObjectShared__ctor_1
               (GamePassProgressionDataObjectShared *this,
               GamePassProgressionDataObjectShared_XPTierRewards *xpTierRewards,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                   );
    cRam_? = '\x01';
  }
  this_00 = (GamePassProgressionDataObjectShared_XPTierRewards *)
            func_?(
                           TypeInfo__MV__WorldObject__GamePassSystem__GamePassProgressionDataObject__GamePassProgressionDataObjectShared__XPTierRewards
                           );
  GamePassProgressionDataObjectShared+XPTierRewards::
  GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
  pGVar1 = &this->fields;
  pGVar1->xpTierRewards = this_00;
  method_00 = (MethodInfo *)pGVar1;
  func_?(pGVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pGVar1->xpTierRewards = xpTierRewards;
  func_?(pGVar1,xpTierRewards);
  return;
}

