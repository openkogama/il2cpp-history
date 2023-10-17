
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
  if (this_00 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0) {
    GamePassProgressionDataObjectShared+XPTierRewards::
    GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).xpTierRewards = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (this_00 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0) {
    GamePassProgressionDataObjectShared+XPTierRewards::
    GamePassProgressionDataObjectShared_XPTierRewards__ctor(this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).xpTierRewards = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).xpTierRewards = xpTierRewards;
    func_?(&this->fields,xpTierRewards);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

