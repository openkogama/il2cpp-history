
/* IAsyncResult BeginInvoke(AvatarModifierPackage, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::AvatarModifierPackages+OnModifierExpiredDelegate::
AvatarModifierPackages_OnModifierExpiredDelegate_BeginInvoke
          (AvatarModifierPackages_OnModifierExpiredDelegate *this,AvatarModifierPackage modifier,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarModifierPackage);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uVar2 = func_?(TypeInfo__AvatarModifierPackage,&modifier);
  uStack_1 = CONCAT44(uStack_1._4_4_,uVar2);
  pIVar3 = (IAsyncResult *)func_?(this,&uStack_1,callback,object);
  return pIVar3;
}

