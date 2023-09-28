#pragma once

#include "c_baseplayerweapon.hpp"

namespace os2::sdk {
  class C_WeaponCSBase : public C_BasePlayerWeapon {
   public:
    void AddStattrakEntity();
    void AddNametagEntity();

    SCHEMA_FIELD(m_bUIWeapon, "C_WeaponCSBase", "m_bUIWeapon", bool);
    SCHEMA_FIELD(m_iOriginalTeamNumber, "C_WeaponCSBase", "m_iOriginalTeamNumber",
                 int);
    PSCHEMA_FIELD_OFFSET(m_hStattrakAttachment, "C_WeaponCSBase",
                         "m_iNumEmptyAttacks", 4, void);
    PSCHEMA_FIELD_OFFSET(m_hNametagAttachment, "C_WeaponCSBase",
                         "m_iNumEmptyAttacks", 20, void);
  };
};  // namespace os2::sdk
